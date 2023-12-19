#include "main.h"

/**
 * powr - function that returns the value of x raised to the power of y
 * @a: base
 * @b: exponent
 *
 * Return: value of x raised to the power of y
 */
unsigned long int powr(unsigned long int a, unsigned long int b)
{
	unsigned int i = 1;
	unsigned long int temp = a;

	if (b == 0)
	{
		return (1);
	}
	else
	{
		while (i < b)
		{
			a = temp * a;
			i++;
		}
	}
	return (a);
}

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to be converted
 *
 * Return: Nothhing
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int bin;
	unsigned long int tmp;
	unsigned long int k = 0;

	for (i = 32; i >= 0; i--)
	{
		if (n == 0)
		{
			break;
		}
		bin = powr(2, i);
		if (n >= bin)
		{
			tmp = powr(10, i);
			k = k + tmp;
			n = n - bin;
		}
	}
	printf("%lu", k);
}
