#include "stack.h"
/**
 * push - adds node to the beginning
 * @h: pointer to the first node
 * @number: integer
 * Return: void
 */
void push(stack **h, int number)
{
    stack *new = (stack *)malloc(sizeof(stack));
    if (new == NULL)
        return;
    new->num = number;
    new->next = NULL;
    if (*h == NULL)
        *h = new;
    else
    {
        stack *tmp = *h;
        new->next = tmp;
        *h = new;
    }
}