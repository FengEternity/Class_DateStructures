// 中缀表达式到后缀表达式的转换

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#define STACKSIZE 20
#define ITEMSIZE 20
#define EXPSIZE 200

// 判断表达式中是否含有非法字符
bool IsLegal(char *postfix)
{
    int i;
    char c;
    for (i = 0; i < strlen(postfix); i++)
    {
        c = postfix[i];
        if (!((c >= '0' && c <= '9') || c == '.' || c == '+' || c == '-' || c == '*' || c == '/' || c == ' ' || c == '(' || c == ')'))
            return FALSE;
    }
    return TRUE;
}

// 从表达式的当前位置curPos获取一个元素，获取完成后，curPos移动到下一个元素的首字符位置
// 出现异常返回-1；若当前元素为操作数，则返回0，若为操作符，则返回1

int GetItem(char *postfix.int *curPos, char *item)
{
    int i = 0, k = *curPos, flag;
    if (postfix[k] == '.')
        flag = -1;
    else if (postfix[k] >= '0' && postfix <= '9')
    {
        while ((postfix[k] >= '0' && postfix[k] <= '9') || postfix[k] == '.')
            item[i++] = postfix[k++];
        item[i++] = '\0';
        flag = 0;
    }
    else
    {
        item[o] = postfix[k++];
        item[1] = '\0';
        flag = 1;
    }
    while (postfix[k] == ' ')
        k++;
    *curPos = k;
    return flag;
}

//  获取操作符的栈外优先级
int ICP(char c)
{
    if (c == '#')
        return 0;
    else if (c == '(')
        return 7;
    else if (c == '*' || c == '/')
        return 7;
    else if (c == '+' || c == '-')
        return 2;
    else if (c == ')')
        return 1;
    else
    {
        printf("后缀表达式不支持操作符%c!\n", c)
            exit(0);
    }
}

// 获取 操作符的栈内优先级
int ISP(char c)
{
    if (c == '#')
        return 0;
    else if (c == '(')
        return 7;
    else if (c == '*' || c == '/')
        return 7;
    else if (c == '+' || c == '-')
        return 2;
    else if (c == ')')
        return 1;
    else
    {
        printf("后缀表达式不支持操作符%c!\n", c)
            exit(0);
    }
}

// 将中缀表达式infix转换为后缀表达式postfix，后缀表达式中相邻元素用空格隔开
void InfixToPostfix(char *infix, char *postfix)
{
    Stack S;
    char item[ITEMSIZE];
    int flag = -1;
    int curPos = 0;
    int k = 0, i;
    char ch, curOP;

    while (infix[curPos] == ' ')
        curPos++;
    Create(&S,STACKSIZE);
    Push(&S,'#');
    while (curPos<strlen(infix))
    {
        flag =GetItem(infix,&curPos,item);
        if(flag==-1)
        {
            printf("异常：中缀表达式元素不合法！\n");
            exit(0);
        }
        else if(flag==1)
        {
            curOP=item[0];
            if(curOP=='(')
            {
                do
                {
                    
                } while (ch!='(');
                

            }
        }
    }
}