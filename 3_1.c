// 顺序栈

#include <stdbool.h>
typedef int ElemType;
typrdef enum { true = 1,
               false = 0 } bool;

// 堆栈结构体定义
typedef struct stack
{
    int top;
    int maxSize;
    ElemType *element;
} Stack;

// 创建一个能容纳 mSize 个单元的空堆栈
void Create(Stack *S, int mSize)
{
    S->maxSize = mSize;
    S->element = (ElemType *)malloc(sizeof(ElemType) * mSize);
    S->top = -1;
}

// 销毁一个已存在的堆栈，即释放堆栈占用地数组空间
void Destroy(Stack *S)
{
    S->maxSize = 0;
    free(S->element);
    S->top = -1;
}

// 判断堆栈是否为空栈，若是，则返回TRUE；否则返回FALSE
bool IsEmpty(Stack *S)
{
    return S->top == -1;
}

// 判断栈是否已满，若是，则返回TRUE；否则返回 FALSE
bool IsFULL(Stack *S)
{
    return S->top == S->maxSize - 1;
}

// 获取栈顶元素，并通过x返回。若操作成功，则返回TRUE；否则返回FALSE
bool Top(Stack *S, ElemType *x)
{
    if (IsEmpty(S)) // 空栈处理
        return FALSE;
    *x = S->element[S->top];
    return TRUE;
}

// 在栈顶位置插入元素x（入栈操作）。若操作成功，则返回TRUE；否则返回FAlSE
bool Push(Stack *S, ElemType x)
{
    if (IsFULL(S)) //  溢出处理
        return FALSE;
    S->top++;
    S->element[S->top] = x;
    return TRUE;
}

// 删除栈顶元素（出栈操作）。若操作成功，则返回TRUE；否则返回FALSE；
bool pop(Stack *S)
{
    if (IsEmpty(S)) // 空栈处理
        return FALSE;
    S->top--;
    return TRUE;
}

// 清楚堆栈中去全部元素，但不释放空间
void Clear(Stack *S)
{
    S->top == -1;
}

