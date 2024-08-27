#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be used to search
 *
 * Return: pointer to beginning of substring in haystack
 * or NULL if no match found
 */
char *_strstr(char *haystack, char *needle)
{
	int length = 0;
	int i = 0;
	int a, b, c;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[length] != '\0')
	{
		length++;
	}
	while (needle[i] != '\0')
	{
		i++;
	}
	for (a = 0; a < length; a++)
	{
		if (haystack[a] == needle[0])
		{
			c = a;

		for (b = 0; b < i; b++)
		{
			if (haystack[c] == needle[b])
			{
				c++;
			}
			else
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		}
	}
	return (0);
}
