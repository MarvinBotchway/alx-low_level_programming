#include "main.h"
/**
 * print_number - Print digits in an integer 'n'
 * @n: The integer to be printed.
 * Return: (void)
 */
void print_number(int n)
{
	int pv = 1;
	int d = 0;

	if (n < 0)
	{
		n = -1 * n;
		_putchar(45);
	}
	while ((n / pv) >= 10)
		pv = pv * 10;
	while (pv >= 1)
	{
		d = (n - (n % pv)) / pv;
		_putchar('0' + d);

		n = n % pv;
		pv = pv / 10;
	}
}
