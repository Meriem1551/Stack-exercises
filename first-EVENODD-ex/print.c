#include "func.h"
/**
 * print - prints a stack
 * @h: pointer to a stack
 * Return: void
 */
void print(stack *h)
{
    stack *ptr;
    if (h == NULL)
        return;
    while (h != NULL)
    {
        ptr = h->next;
        printf("%d|", ptr->num);
        pop(h);
        h = ptr;
    }
}