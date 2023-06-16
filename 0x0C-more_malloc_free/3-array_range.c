#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an ordered array of integers.
 * @min: Smallest integer in the array.
 * @max: Biggest integer in the array.
 * Return: Pointer to the created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i, c;

	if (min > max)
		return (NULL);
	c = (max - min) + 1;
	ptr = malloc(sizeof(int) * c);

	if (ptr == NULL)
	{
		printf("Unable to allocate memory.");
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		ptr[i] = min + i;

	}
	return (ptr);
}
