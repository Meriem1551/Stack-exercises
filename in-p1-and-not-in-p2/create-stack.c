#include "main.h"
/**
 * create_stack - creates a stack
 * @data: integer
 * Return: pointer to a stack
 */
stack *create_stack()
{
    positif
        num_nodes,
        count;
    int number;
    stack *h = NULL;
    printf("How many numbers do you have ");
    scanf("%u", &num_nodes);
    for (count = 0; count < num_nodes; count++)
    {
        printf("Enter number in position %u ", count);
        scanf("%d", &number);
        push(&h, number);
    }
    return (h);
}