#include<stdio.h>
#define SIZE 100
extern int stack[SIZE];
extern int top;
void pop() 
{
    if (top == -1) 
    {
        printf("Stack Underflow\n");
    } else 
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}