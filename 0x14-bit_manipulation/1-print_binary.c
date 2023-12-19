#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/* base case: n is 0 or 1 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	else if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

