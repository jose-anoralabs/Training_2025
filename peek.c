#include<stdio.h>
#define SIZE 100
extern int top;
extern int stack[SIZE];
void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}