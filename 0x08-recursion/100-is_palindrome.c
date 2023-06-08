#include "main.h"
/**
 * _strlen - Find the length of a string.
 * @s: The string to measure.
 * Return: Length of string s otherwise 0;
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (_strlen(s + 1) + 1);
	else
		return (0);
}
/**
 * _strchk - Comapre characters in s.
 * @s: The string to be compared.
 * @i: Iterator starting from first char.
 * @j: Iterator from the last char of the string.
 * Return: 1 if the string is a palindrome 0 otherwise
 */
int _strchk(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (s[i] == s[j] && (i == j || i == j + 1))
		return (1);
	else
		return (_strchk(s, i + 1, j - 1) + 0);
}
/**
 * is_palindrome - Checks if a string (s) is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome and 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (_strchk(s, 0, _strlen(s) - 1));
}
