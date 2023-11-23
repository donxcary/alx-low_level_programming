#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * get_bit - gets the value of a bit at a given index of a binary number
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int num = n;

	if (index > 63)
		return (-1);
	for (i = 0; i < index; i++)
		num = num >> 1;
	return (num & 1);
}