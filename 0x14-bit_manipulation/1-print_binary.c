#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * 
 * Return: Converted number or 0 if there is one or more chars in the string b that is not 0 or 1
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0;

	mask <<= 63;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}
