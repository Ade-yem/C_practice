#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

void check_args(int argc)
{
    if (argc - 1 != 2)
    {
        printf("Error\n");
        exit(98);
    }
    else
        printf("Pass\n");
}

int check_digits(char *argv[], int n)
{
    int i;
    
    for ( i = 0; argv[n][i]; i++)
    {
        if (argv[n][i] < '0' || argv[n][i] > '9')
        {
            printf("Error\n");
            exit(98);
        }
    }
    return i; 
}


char *_initialize_array(char *arr, int last)
{
    int i;

    for (i = 0; i < last ; i++)
        arr[i] = '0';
    arr[last] = '\0';
    return arr;
    
}

char *mul(char *num1, char *num2, int n1, int n2, char *result, int size)
{
    int mul_r, k, nn1, nn2;
    int add_f = 0, add_e = 0;
    k = size - 1;
    nn1 = n1 - 1, nn2 = n2 - 1;
    // if (size <= (k + 1))
    //     return (0);
    // n1--, n2--, size--;


    while (k >= 0)
    {
        if (nn1 < 0)
        {
            if (add_f > 0)
            {
                mul_r = (result[k] - '0') + add_f;
                if (mul_r > 9)
                    result[k - 1] = (mul_r / 10) + '0';
                result[k] = (mul_r % 10) + '0';
            }
            nn1 = n1 - 1, nn2--, add_f = 0, add_e++, k = size - (1 + add_e);
        }
        if (nn2 < 0)
        {
            if (result[0] != '0')
                break;
            size--;
            free(result), result = malloc(size + 1), result = _initialize_array(result, size);
            k = size -1, nn1 = n1 - 1, nn2 = n2 - 1, add_e = add_f = 0;
        }
        if (nn2 >= 0)
        {
            mul_r = ((num1[nn1] - '0') * (num2[nn2] - '0')) + (result[k] - '0') + add_f;
            add_f = mul_r / 10, result[k] = (mul_r % 10) + '0';
        }
        k--, nn1--;
    }
    return result;
        
}

void _print(char *a)
{
    int i;

    for (i = 0; a[i] != '\0'; i++)
        _putchar(a[i]);
    free(a);
}   

int main(int argc, char *argv[])
{
    int num1, num2, arrc;
    char *mult;
    char *omult;
    check_args(argc);
    num1 = check_digits(argv, 1), num2 = check_digits(argv, 2);
    arrc = num1 + num2 + 1;
    printf("%d\n", arrc);
    omult = malloc(arrc);
    if (omult == NULL)
        printf("Error\n"), exit(98);

    omult = _initialize_array(omult, arrc);
    printf("%s + %s\n", argv[1], argv[2]);
    mult = mul(argv[1], argv[2], num1, num2, omult, arrc);
    if (mult == 0)
    {
        printf("Error\n");
        free(omult);
    }
    else
    {
        printf("%s + %s = %s\n", argv[1], argv[2], mult);
        // free(omult);
        // omult = malloc(arrc);
    }
    _print(mult);
    _putchar('\n');
    return (0);
}
