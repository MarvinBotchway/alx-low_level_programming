#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize
 * Return: A pointer to the array created and NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(ptr[0]) * size);
	if (ptr == NULL)
	{
		printf("Failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
