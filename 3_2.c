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

// 判断队列是否为空
bool IsEmpty(Queue *Q)
{
    return Q->front == Q->rear;
}

// 判断堆栈是否已满
bool IsFULL(Queue *Q)
{
    return (Q->rear + 1) % Q->maxSize == Q->front;
}

// 获取队头元素，并通过x返回
bool Front(Queue *Q, ElemType *x)
{
    if (IsEmpty(Q))
        return FALSE;
    *x = Q->element[(Q->front + 1) % Q->element];
    return TRUE;
}

// 在队列Q的队尾插入元素下（入队操作）
bool EnQueue(Queue *Q, ElemType x)
{
    if (IsFULL(Q))
        return FALSE;
    Q->rear = (Q->rear + 1) % Q->maxSize;
    Q->element[Q->rear] = x;
    return TRUE;
}

// 从队列Q中删除队头元素（出队操作）
bool DeQueue(Queue *Q)
{
    if (IsEmpty(Q))
        return FALSE;
    Q->front = (Q->front + 1) % Q->maxSize;
    return TRUE;
}

// 清除队列中全部元素，使队列恢复到初始状态，但并不释放空间
void Clear(Queue *Q)
{
    Q->front == Q->rear == 0;
}