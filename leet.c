#include "main.h"

char *leet(char *s)
{
    int count = 0, i;
    int small[] = {97, 101, 111, 116, 108};
    int caps[] = {65, 69, 79, 84, 76};
    int numbers[] = {54, 53, 48, 55, 49};

    while (s[count] != '\0')
    {
        for (i = 0; i < 5; i++)
        {
            if ((s[count] == small[i]) || (s[count] == caps[i]))
            {
                s[count] = numbers[i];
            }
            
        }
        
        count++;
    }
    return(s);
}