#ifndef STACK_H
#define STACK_H
#define SIZE 100

#include<stdio.h>
void push(int);
void pop();
void peek();
void display();
extern int top;
extern int stack[SIZE];

#endif