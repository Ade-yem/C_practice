#include "main.h"

void jack_bauer(void)
{
    int i, j, a, b, c, d;

    for (i = 0; i <= 23; i++)
    {
        for (j = 0; j <= 59; j++)
        {
            a = (i / 10) + '0';
            b = (i % 10) + '0';
            c = (j / 10) + '0';
            d = (j % 10) + '0';
            _putchar(a);
            _putchar(a);
            _putchar(':');
            _putchar(c);
            _putchar(d);
            _putchar('\n');
        }
        
    }
}

int main(void)
{
    jack_bauer();
    return 0;
}