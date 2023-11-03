#include "func.h"
/**
 * put_odd_then_even - puts even numbers of a stack at the top
 * of odd numbers
 * @p1: pointer to a stack
 * Return: void
 */
void put_odd_then_even(stack *p1)
{
    stack
        *p2 = NULL,
        *p3 = NULL,
        *tmp;
    unsigned int num_of_even = 0;
    // spliting the first stack into 2 substacks
    //  first for even @p2 and second for odd numbers @p3
    while (p1 != NULL)
    {
        if (p1->num % 2 == 0)
        {
            push(&p2, p1->num);
            num_of_even++;
        }
        else
            push(&p3, p1->num);
        tmp = p1->next;
        pop(p1);
        p1 = tmp;
    }
    // pushing p2's numbers into p3
    for (int i = 0; i < num_of_even; i++)
    {
        push(&p3, p2->num);
        tmp = p2->next;
        pop(p2);
        p2 = tmp;
    }
    print(p3);
}
