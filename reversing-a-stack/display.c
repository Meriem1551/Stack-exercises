#include "stack.h"
/**
 * display - prints the stack
 * @head: pointre to the stack
 * Return: void
 */
void display(Floats *p)
{
    Floats *ptr;
    if (p == NULL)
        return;
    while (p != NULL)
    {
        ptr = p->next;
        printf("%.2f\n", ptr->num);
        pop(p);
        p = ptr;
    }
}