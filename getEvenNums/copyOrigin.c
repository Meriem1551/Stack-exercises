#include "main.h"
/**
 * copy_original - copy even nums to another stack
 * @p1: pointer to a stack
 * Return: void
 */
void copy_original(stack *p1)
{
    stack
        *tmp,
        *p2 = NULL,
        *p3 = NULL;
    if (p1 == NULL)
        return;
    while (p1 != NULL)
    {
        tmp = p1->next;
        if (p1->num % 2 == 0)
        {
            push(&p3, p1->num);
            push(&p2, p1->num);
            pop(p1);
            p1 = tmp;
        }
        else
        {
            push(&p2, p1->num);
            pop(p1);
            p1 = tmp;
        }
    }
    p1 = recover_origin(p1, p2);
    printf("This is the original stack: ");
    print(p1);
    printf("\n");
    p2 = NULL;
    p2 = recover_even(p2, p3);
    printf("This is the stack contains even numbers: ");
    print(p2);
}