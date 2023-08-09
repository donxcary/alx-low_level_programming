#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int x, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
	array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
			return (NULL);
		}

	for (x = 0; x < height; x++)
		for (j = 0; j < width; j++)
		array[x][j] = 0;

	return (array);
}

