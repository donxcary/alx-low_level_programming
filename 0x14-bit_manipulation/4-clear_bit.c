#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: number to be modified
 * @index: index in which the bit will be set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;

	if (index > 63)
		return (-1);
	num = num & ~(1 << index);
	*n = num;
	return (1);
}