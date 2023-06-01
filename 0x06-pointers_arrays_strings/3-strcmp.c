#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares 2 strings s1 and s2.
 * @s1: First string in comparison.
 * @s2: Second string in comparison.
 *
 * Return: difference between s1 and s2 (s1 - 22)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
