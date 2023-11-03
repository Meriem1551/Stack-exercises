#include "stack.h"
/**
 * compare - compars two stacks
 * @h1: pointer to the first stack
 * @h2: pointre to the second stack
 * Return: 1 if the two stacks are equals, 0 otherwise
 */
bool compare(stack *h1, stack *h2)
{
    stack
        *tmp1 = h1,
        *tmp2 = h2;
    while (h1 != NULL || h2 != NULL)
    {
        if (h1->num != h2->num)
            return (false);
        tmp1 = h1->next;
        tmp2 = h2->next;
        pop(h1);
        pop(h2);
        h1 = tmp1;
        h2 = tmp2;
    }
    return (true);
}