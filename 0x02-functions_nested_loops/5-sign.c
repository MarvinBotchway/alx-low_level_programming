#include "main.h"

/**
  * print_sign - Prints the sign of a number +, 0 or -
  *
  * @n: The number to be checked and the sign printed
  *
  * Return: 1, 0 or -1 depending on the sign of the number
  */

int print_sign(int n)
{
	int val = 0;

	if (n + n > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (n + n == 0)
	{
		_putchar('0');
		val = 0;
	}
	else
	{
		_putchar('-');
		val = -1;
	}
	return (val);
}


