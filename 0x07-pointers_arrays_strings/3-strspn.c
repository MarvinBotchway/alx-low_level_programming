#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The initial segment.
 * @accept: Bytes to look for.
 * Return:  The number of bytes in the initial segment of (s)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			else if (s[i] != accept[j] && accept[j + 1] == '\0')
				return (c);
		}

	}

	return (c);

}
