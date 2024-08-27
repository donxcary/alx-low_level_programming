#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to use to search
 *
 * Return: pointer to s or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int length = 0;
	int a;
	int b;

	while (s[length] != '\0')
	{
		length++;
	}
	while (accept[i] != '\0')
	{
		i++;
	}
	for (a = 0; a < length; a++)
	{
		for (b = 0; b < i; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}
	return (0);
}
