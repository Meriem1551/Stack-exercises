#include "stack.h"
/**
 * pop - delete the first node
 * @p1: pointer to te first stack
 * @p2: pointre to the second stack
 * Return: void
 */
void pop(stack *h1)
{
    if (h1 == NULL)
        return;
    stack *tmp1 = h1;
    h1 = tmp1->next;
    free(tmp1);
}