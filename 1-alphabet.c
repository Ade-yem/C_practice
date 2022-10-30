#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Return: nothing
 */

void print_alphabet(void)
{
    int i, j;

    for (i=0; i < 10; i++)
    {
        for (j = 97; j <= 122; j++)
            _putchar(j);

        _putchar('\n');
    }
}

int main(void)
{
    print_alphabet();
    return(0);
}