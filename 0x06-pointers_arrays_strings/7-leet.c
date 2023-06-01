#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 * Return: The encoded string;
 */
char *leet(char *s)
{
	int i, j;
	char let[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j] || s[i] == (let[j] - 32))
				s[i] = num[j];
		}
	}
	return (s);
}
