#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../comparing-2-stacks/stack.h"
typedef unsigned int positif;
stack *create_stack(positif);
void fill_stack(stack *, stack *, positif, positif);
bool isExiste(int, int *, positif);
void sort_stack(stack *, positif);
void print(stack *);
int *create_array(stack *, positif);

#endif