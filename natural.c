#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int fibonacci(void);

int main(void)
{
    int i;
    for (i = 0; i < 1024; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            i += i;
            printf("%d", i);
        }    
    }

    putchar('\n');
    fibonacci();

        return (0);
}

int fibonacci(void)
{
    long int prev = 1;
    long int curr = 2;
    long int k, new;

    printf("%d, %d", prev, curr);
    for (k = 0; k < 48; k++)
    {
        new = prev + curr;
        prev = curr;
        curr = new;
        printf(", %d", new);
    }
    

    return 0;
}