#include "main.h"
/**
 * fill_stack - fill a stsck from 2 others
 * @p3: pointer to a poinetr to a stack
 * @p1: pointre to a stack
 * @p2: pointer to a stack
 * Return: void
 */
void fill_stack(stack *h1, stack *h2, positif n, positif m)
{
    int *t1 = create_array(h1, n); // array for h1
    int *t2 = create_array(h2, m); // array for h2
    positif i, j, count = 0;
    stack *h3 = NULL;

    // NUMBER IS IN T1 AND NOT IN T2
    for (i = 0; i < n; i++)
    {
        if (!isExiste(t1[i], t2, m))
        {
            push(&h3, t1[i]);
            count++;
        }
    }
    // NUMBER IS IN T2 AND NOT IN T1
    for (i = 0; i < m; i++)
    {
        if (!isExiste(t2[i], t1, n))
        {
            push(&h3, t2[i]);
            count++;
        }
    }
    sort_stack(h3, count);
}