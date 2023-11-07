#include "main.h"
/**
 * create_stack - creates a stack
 * @num_nodes: integer
 * Return: pointer to a stack
 */
stack *create_stack(positif num_nodes)
{
    positif
        count;
    int number;
    stack *h = NULL;
    for (count = 0; count < num_nodes; count++)
    {
        printf("Enter number in position %u ", count);
        scanf("%d", &number);
        push(&h, number);
    }
    return (h);
}