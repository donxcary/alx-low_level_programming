#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to locate
 *
 * Return: pointer to s[firt occurence of c] or
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
