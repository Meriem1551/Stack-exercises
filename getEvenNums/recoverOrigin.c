#include "main.h"
/**
 * recover_origin: - recovers the original stack
 * @f: pointer to stack to recover
 * @s: pointer to stack to get data from
 * Return: pointre to new stack f
 */
stack *recover_origin(stack *f, stack *s)
{
    stack *tmp;
    if (s == NULL)
        return (NULL);
    while (s != NULL)
    {
        tmp = s->next;
        push(&f, s->num);
        pop(s);
        s = tmp;
    }
    return (f);
}