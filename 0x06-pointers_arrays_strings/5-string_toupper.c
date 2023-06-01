#include "main.h"
/**
 * string_toupper - Converts all lowercase chars of a string to uppercase.
 * @s: String to be converted to uppercase
 * Return: Pointer to the string in uppercase (char *).
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
