#include "main.h"

void times_table(void)
{
    int i, j, times;

    for ( i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            times = (i * j);
            if(times <= 9)
            {
                _putchar(' ');
                _putchar(times + '0');
            }
            else
            {
                _putchar((times / 10) + '0');
                _putchar((times % 10) + '0');
            }
            if (j != 9)
            {
                _putchar(',');
                _putchar(' ');
            }         
        }
        _putchar('\n');
        
    }
    
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    times_table();
    return (0);
}