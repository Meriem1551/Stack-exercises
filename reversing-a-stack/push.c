#include "stack.h"
/**
 * push - adds nodes at the beginning
 * @p: pointer to a pointer to a stack
 * @n: a float
 * Return: void
 */
void push(Floats **p, float number)
{
    Floats *new = (Floats *)malloc(sizeof(Floats));
    if (new == NULL)
        return;
    new->num = number;
    new->next = NULL;
    if (*p == NULL)
        *p = new;
    else
    {
        Floats *tmp = *p;
        new->next = tmp;
        *p = new;
    }
}