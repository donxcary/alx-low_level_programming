#include "main.h"
#include <stdio.h>

#define CHAR_BIT 8


/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1); /* error: index out of range */
	}
return ((n >> index) & 1);
}
