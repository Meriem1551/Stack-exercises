#include "stack.h"
/**
 * pop - delete the first node from a stack
 * @p: pointer to a stack
 * Return: void
 */
void pop(Floats *p)
{
    if (p == NULL)
        return;
    Floats *ptr = p;
    p = ptr->next;
    free(ptr);
}