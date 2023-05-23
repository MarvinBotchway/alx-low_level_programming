#include "main.h"
/**
  * print_alphabet - Print Alphabet a to z (lowercase).
  *
  * Return: void (Always)
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
