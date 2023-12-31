#include "main.h"
/**
 * print - prints a stack
 * @h: pointre to a stack
 * Return: void
 */
void print(stack *h)
{
    stack *tmp;
    if (h == NULL)
        return;

    while (h != NULL)
    {
        tmp = h->next;
        printf("%d | ", h->num);
        pop(h);
        h = tmp;
    }
}