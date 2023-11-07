#include "main.h"
/**
 * fill_stack - fill a stsck from 2 others
 * @p3: pointer to a poinetr to a stack
 * @p1: pointre to a stack
 * @p2: pointer to a stack
 * Return: void
 */
void fill_stack(stack *h1, stack *h2)
{
    stack
        *tmp,
        *h4,
        *h3 = NULL;
    positif count = 0;
    if (h1 == NULL || h2 == NULL)
        return;
    // items existe in h1 and not in h2
    while (h1 != NULL)
    {
        while (h2 != NULL)
        {
            tmp = h1->next;
            if (!isExiste(h1->num, h2))
            {
                push(&h3, h1->num);
                push(&h4, h1->num); // contains h1's items
                pop(h1);
                h1 = tmp;
                count++;
            }
            else
            {
                push(&h4, h1->num);
                pop(h1);
                h1 = tmp;
            }
        }
    }
    // items existe in h2 and not in h1
    while (h2 != NULL)
    {
        while (h4 != NULL)
        {
            tmp = h2->next;
            if (!isExiste(h2->num, h4))
            {
                push(&h3, h2->num);
                pop(h2);
                h2 = tmp;
                count++;
            }
            else
            {
                pop(h2);
                h2 = tmp;
            }
        }
    }
    sort_stack(h3, count);
}