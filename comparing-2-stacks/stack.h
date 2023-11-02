#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * stack - struct of ints for creating a stack
 */
typedef struct stack stack;
struct stack
{
    int num;
    struct stack *next;
};
void push(stack **, int);
void pop(stack *, stack *);
bool compare(stack *, stack *);
#endif