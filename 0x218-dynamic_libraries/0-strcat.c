#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int lengthofa;
	int lengthofb;

	lengthofa = 0;
	while (dest[lengthofa] != '\0')
	{
		lengthofa++;
	}
	lengthofb = 0;
	while (src[lengthofb] != '\0')
	{
		dest[lengthofa] = src[lengthofb];
		lengthofa++;
		lengthofb++;
	}
	dest[lengthofa] = '\0';
	return (dest);
}
