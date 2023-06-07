#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: String to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
