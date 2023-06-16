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
	unsigned int i, c, ls1, ls2;

	i = c = ls1 = ls2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;
	while (s2[ls2] != '\0')
		ls2++;
	if (n >= (ls2 - 1))
		n = ls2 - 1;
	ptr = malloc(ls1 + n);

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
