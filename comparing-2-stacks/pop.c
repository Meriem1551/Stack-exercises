#include "stack.h"
/**
 * pop - delete the first node
 * @p1: pointer to te first stack
 * @p2: pointre to the second stack
 * Return: void
 */
void pop(stack *h1, stack *h2)
{
    if (h1 == NULL || h2 == NULL)
        return;
    stack
        *tmp1 = h1,
        *tmp2 = h2;
    h1 = tmp1->next;
    h2 = tmp2->next;
    free(tmp1);
    free(tmp2);
}