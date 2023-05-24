#include "main.h"
/**
 * print_times_table - Prints the n times table, starting from 0.
 * @n: The number which times table would be printed.
 *
 * Return: Always (void).
 */
void print_times_table(int n)
{
	int i, j, prod;

	prod = 0;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = j * i;
				format_print(prod, n, j);
			}
			_putchar('\n');
		}
	}
}
/**
 * format_print - Formats the output 2 values.
 * @prod: The product.
 * @n: The times table to print
 * @j: The number of colums to be printed.
 * Return: Always (void).
 */
void format_print(int prod, int n, int j)
{
	int u, t, h = 0;

	if (j != 0)
		_putchar(' ');
	if (prod <= 9)
	{
		u = prod;
		if ((j > 0))
		{
			_putchar(' ');
			_putchar(' ');
		}
	}
	else if (prod <= 99)
	{
		u = prod % 10;
		t = (prod - u) / 10;
		_putchar(' ');
		_putchar(t + '0');
	}
	else if (prod <= 225)
	{
		u = (prod % 100) % 10;
		if ((prod % 100) >= 9)
			t = ((prod % 100) - u) / 10;
		h = (prod - (prod % 100)) / 100;
		_putchar(h + '0');
		_putchar(t + '0');
	}
	_putchar(u + '0');
	if (j != n)
		_putchar(',');
}
