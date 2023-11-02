typedef unsigned int pos;
#include "stack.h"
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
    stack
        *p1 = NULL,
        *p2 = NULL;
    pos num_node1, num_node2, i;
    int num;
    printf("      Comparing two stacks \n");
    printf("-------------------------------------\n");
    printf("Enter the first stack's size\n");
    scanf("%u", &num_node1);
    for (i = 0; i < num_node1; i++)
    {
        printf("Entre data for pos %u\n", i);
        scanf("%d", &num);
        push(&p1, num);
    }
    printf("Great!, now enter the second stack's size\n");
    scanf("%u", &num_node2);
    for (i = 0; i < num_node2; i++)
    {
        printf("Entre data for pos %u\n", i);
        scanf("%d", &num);
        push(&p2, num);
    }
    if (num_node1 != num_node2)
    {
        printf("They are not equals");
    }
    else
    {
        if (compare(p1, p2))
            printf("EQUALS :D");
        else
            printf("NOT :(");
    }
    return 0;
}