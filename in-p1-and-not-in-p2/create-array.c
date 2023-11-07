#include "main.h"
/**
 * create_array - creates a array from a stack
 * @p: pointer to a stack
 * @numN: unsigned int
 * Return: pointer to an array of ints
 */
int *create_array(stack *p, positif numN)
{
    stack *tmp;
    int *t;
    positif j;
    t = (int *)malloc(sizeof(int) * numN);
    if (t == NULL)
        return (NULL);
    j = 0;
    while (p != NULL)
    {
        tmp = p->next;
        t[j] = p->num;
        pop(p);
        p = tmp;
        j++;
    }
    return (t);
}