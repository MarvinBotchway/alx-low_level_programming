#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string (s).
 * @s: String to be searched.
 * @c: Character being searched for
 * Return: A Pointer to the first occurrence of (c)
 * in (s) or (NULL) if not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
