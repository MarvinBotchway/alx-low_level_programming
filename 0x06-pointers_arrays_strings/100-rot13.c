#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @s: string to be encoded
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z' && s[i] >= 'n') ||
		(s[i] >= 'A' && s[i] <= 'Z' && s[i] >= 'N'))
		{
			s[i] -= 13;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z' && s[i] <= 'n') ||
		(s[i] >= 'A' && s[i] <= 'Z' && s[i] <= 'N'))
		{
			s[i] += 13;
		}
	}

	return (s);
}
