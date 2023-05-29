#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 *
 * Return: Always void
 */

void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	char l = ' ';
	char r = ' ';

	while (*(s + c) != '\0')
	{
		c++;
	}
	c--;

	while (i <= c)
	{
		l = *(s + i);
		r = *(s + c);

		*(s + i) = r;
		*(s + c) = l;

		c--;
		i++;
		
	}
}
