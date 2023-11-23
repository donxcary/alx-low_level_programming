#include "main.h"
#include <stdio.h>

int binary_len(const char *b);
int _pow(int x, int y);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = binary_len(b);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		num += _pow(2, len - 1);
		else if (b[i] != '0')
		return (0);
		len--;
	}

	return (num);
}

/**
 * binary_len - returns the length of a string
 * @b: string
 *
 * Return: length of string
 */

int binary_len(const char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _pow - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: value of x raised to the power of y
 */

int _pow(int x, int y)
{
	int i, num = 1;

	for (i = 0; i < y; i++)
		num *= x;

	return (num);
}
