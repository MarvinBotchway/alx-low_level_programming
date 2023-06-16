#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Size of s2 to be added to s1.
 * Return: Pointer to s1 + s2 or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, c;

	i = j = c = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	ptr = malloc(i + n + 1);

	if (ptr == NULL)
	{
		printf("Unable to allocate memory");
		return (NULL);
	}

	for (c = 0; c < (i + n); c++)
	{
		if (c < i)
			ptr[c] = s1[c];
		else
			ptr[c] = s2[c - i];
	}
	ptr[c] = '\0';

	return (ptr);
}
