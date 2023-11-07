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
    printf("----For first stack----\n");
    h1 = create_stack();
    printf("----Now for second stack----\n");
    h2 = create_stack();
    fill_stack(h1, h2);
}
