#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct Floats - struct of floats
 * @num: float
 * @next: pointer to struct
 */
typedef struct Floats Floats;
struct Floats
{
    float num;
    struct Floats *next;
};
void push(Floats **, float);
void pop(Floats *);
void reverse(Floats **);
void display(Floats *);
#endif