#include "stack.h"
/**
 * reverse - reverses a stack;
 * @p1: pointer to stack
 * Return: void
 */
void reverse(Floats **p1)
{
    Floats
        *p2 = NULL,
        *tmp;
    if (*p1 == NULL)
        return;
    while (*p1 != NULL)
    {
        tmp = (*p1)->next;
        push(&p2, (*p1)->num);
        pop(*p1);
        (*p1) = tmp;
    }
    (*p1) = p2;
}