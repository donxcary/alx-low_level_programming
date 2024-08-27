#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthofa;
	int lengthofb;

	lengthofa = 0;
	while (dest[lengthofa] != '\0')
	{
		lengthofa++;
	}
	lengthofb = 0;
	while (src[lengthofb] != '\0' && lengthofb < n)
	{
		dest[lengthofa] = src[lengthofb];
		lengthofa++;
		lengthofb++;
	}
	dest[lengthofa] = '\0';
	return (dest);
}
