#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)

{
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
	else

	if (n > 1)
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */