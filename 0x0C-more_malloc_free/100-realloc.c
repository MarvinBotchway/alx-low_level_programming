#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * to a new size.
 * @ptr: Original pointer.
 * @old_size: The size of the original pointer.
 * @new_size: The size of memory to reallocate to.
 * Return: Pointer to new memory allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i, c;

	i = c = 0;
	old_ptr = (char *)ptr;
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		printf("Unable to allocate memory.");
		return (NULL);
	}
	if (new_size > old_size)
		c = old_size;
	else if (new_size < old_size)
		c = new_size;
	else if (new_size == old_size)
		return (ptr);
	for (i = 0; i < c; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}
