#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements to allocate.
 * @size: Number of bytes each.
 * Return: A pointer to allocated memory on success or
 * NULL otherwise.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		printf("Unable to allocate memory");
		return (NULL);
	}
	memset(ptr, 0, (nmemb * size));

	return (ptr);
}
