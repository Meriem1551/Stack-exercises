#include "main.h"
/**
 * isExiste - checs if a value existe in a given stack
 * @s: pointer to array of integers
 * @n: integer
 * @num: integer
 * Return: true if it existe, false otherwise
 */
bool isExiste(int n, int s[], positif num)
{
    for (int i = 0; i < num; i++)
    {
        if (s[i] == n)
            return (true);
    }
    return (false);
}