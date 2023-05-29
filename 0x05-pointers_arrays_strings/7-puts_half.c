#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string which would have half printed
 * Return: Always (void);
 */
void puts_half(char *str)
{
	int i, n, len;

	i = 0;
	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		i = (len / 2);
	else
	{
		n = (len - 1) / 2;
		i = len - n;
	}
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
