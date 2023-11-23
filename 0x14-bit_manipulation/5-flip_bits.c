#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: number of bits that need to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j, count = 0;

	for (i = 0; i < 64; i++)
	{
		j = 1 << i;
		if ((n & j) != (m & j))
			count++;
	}
	return (count);
}