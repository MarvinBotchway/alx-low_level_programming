#include "main.h"
/**
 * -puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed
 * Return: Always void.
 */
void _puts(char *str)
{
	int i;
	
	i = 0;
	for (; *(str + i) != '\0'; i++)
		_putchar(*(str + i));	
}
