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
    ptr = h;
    while (ptr != NULL)
    {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
}