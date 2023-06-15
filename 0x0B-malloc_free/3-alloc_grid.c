#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Creates a pointer to a 2 dimmensional array.
 * @width: The width of the array.
 * @height: The height of the array.
 * Return: A pointer to a 2 dimensional array of integers
 * or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	i = j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		printf("Unable to allocate memory!");
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}
	return (ptr);
}
