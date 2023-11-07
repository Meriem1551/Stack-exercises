#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../comparing-2-stacks/stack.h"
typedef unsigned int positif;
stack *create_stack();
void fill_stack(stack *, stack *);
bool isExiste(int, stack *);
void sort_stack(stack *, positif);
void print(stack *);
#endif