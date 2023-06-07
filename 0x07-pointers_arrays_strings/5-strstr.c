#include "main.h"
#include <stdlib.h>
/**
 * _strstr - Locates a substring.
 * @haystack: String to search.
 * @needle: Substring to find.
 * Return: Pointer to the start of the located substring
 * if successful otherwise null.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *str = "";

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				if (haystack[j] == needle[0])
					str = haystack + j;
				if (needle[i + 1] == '\0')
					return (str);
			}
		}
	}

	return (NULL);
}
