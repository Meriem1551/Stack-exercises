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
    ptr = p;
    while (ptr != NULL)
    {
        printf("%.2f\n", ptr->num);
        ptr = ptr->next;
    }
}