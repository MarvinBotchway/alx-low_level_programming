#include "main.h"
/**
 * _strlen_recursion - Counts and Returns the length of a string.
 * @s: Stirng to be measured
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
		return (0);
}
