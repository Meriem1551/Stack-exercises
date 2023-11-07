#include "main.h"
/**
 * isExiste - checs if a value existe in a given stack
 * @f: pointer to the first stack
 * @n: integer
 * Return: true if it existe, false otherwise
 */
bool isExiste(int n, stack *s)
{
    stack *tmp;
    while (s != NULL)
    {
        tmp = s->next;
        if (s->num == n)
            return false;
        pop(s);
        s = tmp;
    }
    return true;
}