#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: value of pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;
	char str;

	while (src[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0' && i <= length && length >= 0)
	{
		str = src[i];
		dest[i] = str;
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
