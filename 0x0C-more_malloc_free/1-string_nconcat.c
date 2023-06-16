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
	unsigned int i, c;

	i = c = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	if (n >= (c - 1))
		n = c - 1;
	ptr = malloc(i + n + 1);

	if (ptr == NULL)
	{
		printf("Unable to allocate memory");
		return (NULL);
	}

	for (c = 0; s1[c] != '\0'; c++)
	{
		ptr[c] = s1[c];
	}
	for (i = 0; i <= n; i++)
	{
		ptr[c] = s2[i];
		c++;
	}
	ptr[c] = '\0';

	return (ptr);
}
