#include<stdio.h>
#define SIZE 100
extern int stack[SIZE];
extern int top;
void display() 
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    } else 
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}