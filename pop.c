#include "stack.h"
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