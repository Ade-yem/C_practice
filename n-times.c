#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
    if ((n < 15) && (n > 0))
    {
        int num, mult, prod;

        for (num = 0; num <= n; num++)
        {
            for (mult = 0; mult <= n; mult++)
            {
                prod = num * mult;

                if (prod <= 9)
                {
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(prod + '0');
                }
                else if (prod <= 99)
                {
                    _putchar(' ');
                    _putchar((prod / 10) + '0');
                    _putchar((prod % 10) + '0');
                }
                else
                {
                    _putchar(((prod / 100) % 10) + '0');
                    _putchar(((prod / 10) % 10) + '0');
                    _putchar((prod % 10) + '0');
                }
                

                if (mult < n)
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
    
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(12);
    _putchar('\n');
    print_times_table(-12);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    return (0);
}