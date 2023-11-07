#include "main.h"
/**
 * sort_stack - sort a given stack
 * @h: pointer to a stack
 * @numN: unsigned int
 * Return: void
 */
void sort_stack(stack *h, positif numN)
{

    int n;
    positif
        j = 0,
        pos;
    int *t = create_array(h, numN);
    // insertion sort
    for (j = 1; j < numN; j++)
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
    for (j = 0; j < numN; j++)
    {
        push(&h, t[j]);
    }
    print(h);
}