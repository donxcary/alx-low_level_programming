#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area pointed to and to be filled
 * @b: desired bytes to use to fill
 * @n: number of bytes to be changed
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
