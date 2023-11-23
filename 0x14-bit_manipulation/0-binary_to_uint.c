#include "main.h"
#include <stdio.h>

/**
 * power - function to calculate power of a number
 * @a: number to be powered
 * @b: power
 * Return: powered number
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i = 1;
	unsigned int temp = a;


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
*power - function to evaluate a number raised to power of other number
*
*@a: number to the power of
* @b : the power to be raised
* Return : result of power
* /


/**
 * num_digits - function to calculate number of digits in a number
 * @num: number to be evaluated
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
 * num_digits - function to count digits in a number
 * @num: number to be counted
 * Return: digits
 */


/**
* _atoi - function to convert string to integer
 * @s: string to be converted
 * Return: converted integer
 *
*/
unsigned int _atoi(const char *s)
{
	unsigned int i, n, len, digit;

	i = 0;
	n = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0') len++;
	while (i < len)
	{
		if (s[i] == '0' || s[i] == '1')
		{
			digit = s[i] - '0';
			n = n * 10 + digit;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (n);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */



/**
* binary_to_uint - function to convert binary to unsigned int
* @b: binary number to be converted
* Return: converted number
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = _atoi(b);
	unsigned int digits = num_digits(res);
	unsigned int div = 10;
	unsigned int j = power(div, digits - 1);
	unsigned int g;
	unsigned int h = 0;
	unsigned int i;
	unsigned int k = digits - 1;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < digits; i++)
	{
		g = res / j;
		res = res % j;
		h = h + (g * power(2, k));
		j = j / div;
		k--;
	}
	return (h);
}


/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */