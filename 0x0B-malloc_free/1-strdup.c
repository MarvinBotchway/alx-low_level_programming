#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Creates a pointer to a newly allocated space in memory,
 * containaining a copy of the string given as a parameter.
 * @str: String to copy.
 * Return: Pointer to new string or NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		printf("Failed to allocate memory!");
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];

	return (ptr);
}
