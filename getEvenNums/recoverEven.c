#include "main.h"
/**
 * revover_even - copy even nums in same order as the origin one
 * @f: pointer to a stack(where we'll copy the even nums)
 * @s: pointer to a stack contains the even nums
 * Return: pointer to new stack f
 */
stack *recover_even(stack *f, stack *s)
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