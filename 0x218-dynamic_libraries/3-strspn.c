#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to use to check
 *
 * Return: number of bytes in s matching with accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int length = 0;
	int a;
	int b = 0;
	int c = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (accept[b] != '\0')
	{
		b++;
	}
	for (i = 0; i < length; i++)
	{
		for (a = 0; a < b; a++)
		{
			if (s[i] == accept[a])
			{
				c++;
				break;
			}
			if (accept[a + 1] == '\0')
			{
				return (c);
			}
		}
	}
	return (c);
}
