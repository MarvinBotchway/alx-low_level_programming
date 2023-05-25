#include "main.h"
/**
  * print_most_numbers - Print numbers 0 - 9 without 2 & 4
  *
  * Return: void
  */
void print_most_numbers(void)
{
	char num = '0';

	for (; num <= '9'; num++)
	{
		if (num != '4' && num != '2')
			_putchar(num);
	}
	_putchar('\n');
}
