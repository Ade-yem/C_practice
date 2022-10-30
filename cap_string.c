#include "main.h"

char *cap_string(char *s)
{
    int seperators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
    int count = 0, i, sep;

    while (*(s + count) != '\0')
    {
        for (sep = 0; sep <= 13; sep++)
        {
            if (*(s + count) == seperators[sep])
            {
                for (i = 97; i <= 122; i++)
                {
                    if (s[count + 1] == i)
                    {
                        s[count + 1] = i - 32;
                    }
                }
            }
        }
        count++;
    }

    return (s);
}