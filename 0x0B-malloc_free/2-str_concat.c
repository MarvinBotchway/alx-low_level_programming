#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: Pointer to a string with s1 plus s2
 * Or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, l1, l2;

	i = j = l1 = l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	ptr = malloc(sizeof(*ptr) * (l1 + l2 + 1));
	if (ptr == NULL)
	{
		printf("Unable to allocate memory!");
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = s2[j];
	return (ptr);
}
