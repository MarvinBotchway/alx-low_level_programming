#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: String to be capitalized
 * Return: Pointer to the capitalized String (char *s).
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char sep[] = {
		',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((*(s + i) >= 97 && s[i] <= 122 &&  i == 0))
			s[i] = s[i] - 32;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (*(s + i) >= 97 && s[i] <= 122 && s[i - 1] == sep[j])
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
