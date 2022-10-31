// 循环队列

typedef int ElemType;
typrdef enum { true = 1,
               false = 0 } bool;

// 循环队列结构体定义
typedef struct queue
{
    int front;
    int rear;
    int maxSize;
    ElemType *element;
} Queue;

// 创建一个能容纳 mSize 个单元的空列表
void create(Queue *Q, int mSize)
{
    Q->maxSize = mSize;
    Q->element = (ElemType *)malloc(sizeof(ElemType) * mSize);
    Q->front = Q->rear = 0;
}

// 销毁一个已存在的队列，即释放队列占用的数组空间
void Destroy(Queue *Q)
{
    Q->maxSize = 0;
    free(Q->element);
    Q->front = Q->rear = -1;
}

