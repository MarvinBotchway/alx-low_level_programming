#include "main.h"
/**
  * print_diagonal - Draws a diagonal line on the terminal with \.
  * @n:  Number of times \ should be printed
  * Return: void
  */
void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (; j <= i - 1; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
