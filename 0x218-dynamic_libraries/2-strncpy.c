#include "main.h"

/**
 * *_strncpy - a function that copies a string with atmost n bytes
 * @dest: The pointer storing the string copy.
 * @src: the string to be copied from
 * @n: The maximum number of bytes to copied from src.
 * Return: value of pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
