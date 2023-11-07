#include "main.h"
/**
 * sort_stack - sort a given stack
 * @h: pointer to a stack
 * @i: unsigned int
 * Return: void
 */
void sort_stack(stack *h, positif i)
{
    int
        *t,
        n;
    positif
        j = 0,
        pos;
    stack *tmp;

    t = (int *)malloc(sizeof(int) * i);
    if (t == NULL)
        return;
    while (h != NULL)
    {
        tmp = h->next;
        t[j] = h->num;
        pop(h);
        h = tmp;
        j++;
    }
    // insertion sort
    for (j = 1; j < i; j++)
    {
        n = t[j];
        pos = j;
        while (pos > 0 && t[pos - 1] > n)
        {
            t[pos] = t[pos - 1];
            pos--;
        }
        t[pos] = n;
    }
    h = NULL;
    for (j = 0; j < i; j++)
    {
        push(&h, t[j]);
    }
    print(h);
}