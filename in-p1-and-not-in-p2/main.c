#include "main.h"
/**
 * main - checks the code
 * Return : always 0
 */
int main(void)
{
    stack
        *h1,
        *h2;
    positif
        num_nodes1,
        num_nodes2;
    printf("----For first stack----\n");
    printf("How many numbers do you have ");
    scanf("%u", &num_nodes1);
    h1 = create_stack(num_nodes1);
    printf("----Now for second stack----\n");
    printf("How many numbers do you have ");
    scanf("%u", &num_nodes2);
    h2 = create_stack(num_nodes2);
    fill_stack(h1, h2, num_nodes1, num_nodes2);
}
