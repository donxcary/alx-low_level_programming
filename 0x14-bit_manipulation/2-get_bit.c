#include "main.h"

/**
 * num_digits - function to count number of digits in a number
 * @num: number to be counted
 *
 *
 * Return: number of digits
 */
unsigned int num_digits(unsigned int num)
{
	unsigned int div = 10;
	unsigned int res = num;
	unsigned int digits = 1;

	if (num >= 1 && num <= 9)
	{
		return (digits);
	}
	else
	{
		while (res > 9)
		{
			res = res / div;
			digits++;
		}
	}
	return (digits);
}

/**
 * powr - function to calculate power of a number
 * @a: base
 * @b: power
 *
 * Return: power of a number
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
 * print_bin - function to print binary of a number
 * @n: number to be printed
 *
 * Return: binary of a number
 */

unsigned long int print_bin(unsigned long int n)
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
		bin = (unsigned long int)(powr(2, i));
		if (n >= bin)
		{
			tmp = (unsigned long int)(powr(10, i));
			k = k + tmp;
			n = n - bin;
		}
	}
	return (k);
}

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin_2;
	unsigned long int bin = print_bin(n);
	unsigned int digits = num_digits(bin);
	int num = (n >> index);

	if (digits < index || digits == 0)
	{
		return (-1);
	}
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bin_2 = print_bin(num);
	num = bin_2 % 10;
	return (num);
}
