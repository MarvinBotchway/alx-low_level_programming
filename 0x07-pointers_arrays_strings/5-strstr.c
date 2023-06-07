#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - Locates a substring.
 * @haystack: String to search.
 * @needle: Substring to find.
 * Return: Pointer to the start of the located substring
 * if successful otherwise null.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *str = NULL;

	i = 0;
	j = 0;
	while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j])
			{
				if (i == 0)
					str = haystack + j;
			}
			else if (needle[i] != haystack[j])
			{
				i = 0;
			}
			j++;
		}
		i++;
	}

	return (str);
}
