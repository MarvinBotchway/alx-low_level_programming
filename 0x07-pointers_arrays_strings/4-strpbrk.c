#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String for search reference.
 * @accept: String to be searched.
 * Return: (Pointer) to s if successful otherwise (NULL).
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[j - 1]);
		}
	}

	return (NULL);
}
