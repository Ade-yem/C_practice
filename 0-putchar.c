#include "main.h"

int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    char ch[] = "_putchar";
    int i;

    for (i = 0; ch[i] != '\0'; i++)
    {
        _putchar(ch[i]);
    }
    _putchar('\n');
    
}