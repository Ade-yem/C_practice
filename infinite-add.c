#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i =0, j = 0, d1, d2, k;
    int add_r, add_f = 0;

    while (n1[i] != '\0')
        i++;

    while (n2[j] != '\0')
        j++;

    if (i >= j)
        k = i + 1;
    else
        k = j + 1;

    if (size_r <= (k + 1))
        return(0);

    r[k + 1]  = '\0';

    i--, j--, size_r--;
    d1 = n1[i] - 48, d2 = n2[j] - 48;

    while (k >= 0)
    {
        

        add_r = n1[i] + n2[j] + add_f;

        if (add_r >= 10)
        {
            add_f = add_r / 10;
        }
        else
            add_f = 0;

        if (add_r > 0)
            r[k] = (add_r % 10) + 48;
        else
            r[k] = '0';

        if (i > 0)
            i--, d1 = n1[i] + 48;
        else
            d1 = 0;

        if (j > 0)
            j--, d2 = n2[j] + 48;
        else
            d2 = 0;

       k--; size_r--;
    }
    if (*(r) == '0')
        return (r + 1);
    else
        return (r);   
    
}