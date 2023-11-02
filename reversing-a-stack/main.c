typedef unsigned int positif;
#include "stack.h"
/**
 * main - checks my code
 * Return: always 0
 */

int main(void)
{
    float n;
    positif n_nodes, count = 0;
    Floats *p1 = NULL;
    printf("How many nodes do you have?\n");
    scanf("%u", &n_nodes);

    while (count < n_nodes)
    {
        printf("Enter number for position %u: \n", count);
        scanf("%f", &n);
        push(&p1, n);
        count++;
    }
    reverse(&p1);
    display(p1);
}