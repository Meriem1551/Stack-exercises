#include "func.h"
/**
 * main - checks the code
 * Return: always 0
 */
int main(void)
{
    int data;
    unsigned int count, num;
    stack *s = NULL;

    printf("How many numbers do you have? ");
    scanf("%u", &num);
    for (count = 0; count < num; count++)
    {
        printf("Enter number of pos: %u", count);
        scanf("%d", &data);
        push(&s, data);
    }
    put_odd_then_even(s);
}