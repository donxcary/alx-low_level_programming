#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	j = 0;
	while (dest[j] != '\0')/* find the end of dest */
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')/* copy src to dest */
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';/* add null terminator */
	return (dest);
}
