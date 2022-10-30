#include <stdio.h>

unsigned int _pow(unsigned int base, unsigned int exp)
{
        unsigned int result = 1;

        if (exp == 0)
                return (1);
        while (exp != 0)
        {
                result *= base;
                --exp;
        }
        return (result);
}

unsigned int binary_to_uint(const char *b)
{
        unsigned int a = 0, c, i, sum = 0, n, digit;

        if (!b)
                return (0);

        while (b[a] != '\0')
        {
                if (b[a] != '0' || b[a] != '1')
                {
                        break;
                        return (0);
                }
                a++;
                
        }

        i = a - 1;
        n = 0;
        for (c = i; c > 0; c--)
        {
                digit = b[c] * _pow(2, n);
                sum += digit;
                n++;
        }
        return (a);
}


int main()
{
	unsigned int n;
	printf("%d\n", _pow(2, 0));
	printf("%d\n", _pow(2, 5));
	n = binary_to_uint("1");
    	printf("%u\n", n);
    	n = binary_to_uint("101");
    	printf("%u\n", n);
    	n = binary_to_uint("1e01");
    	printf("%u\n", n);
    	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
    	printf("%u\n", n);
	return 0;
}