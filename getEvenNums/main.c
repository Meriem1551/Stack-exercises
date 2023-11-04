#include "main.h"
/**
 * main - checks the code
 * Return: always 0
 */
int main(void)
{
    positif num_nodes, i;
    int data;
    stack *h = NULL;
    printf("How many numbers do you have? ");
    scanf("%u", &num_nodes);
    for (i = 0; i < num_nodes; i++)
    {
        printf("What's the number of pos %d?", i);
        scanf("%d", &data);
        push(&h, data);
    }
    copy_original(h);
}