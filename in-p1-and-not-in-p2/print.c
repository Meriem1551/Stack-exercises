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
    printf("%d | ", h->num);
    tmp = h->next;
    pop(h);
    h = tmp;
}