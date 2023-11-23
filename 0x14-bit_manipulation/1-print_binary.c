#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * 
 * Return: Converted number.
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int i, j, k = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		j = num >> i;
		if (j & 1)
		{
			k = 1;
			printf("1");
		}
		else if (k == 1)
			printf("0");
	}
}