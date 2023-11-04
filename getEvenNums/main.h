#ifndef MAIN_H
#define MAIN_H
#include "../comparing-2-stacks/stack.h"
#include "../first-EVENODD-ex/func.h"
#include <stdio.h>
#include <stdlib.h>
typedef unsigned int positif;
void copy_original(stack *);
stack *recover_origin(stack *, stack *);
stack *recover_even(stack *, stack *);
#endif