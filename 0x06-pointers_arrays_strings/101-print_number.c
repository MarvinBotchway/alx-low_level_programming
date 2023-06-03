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
	int nabs = n;

	if (n < 0)
		nabs = -1 * n;
	while ((nabs / pv) >= 10)
	{
		pv = pv * 10;
	}
	if (n < 0)
		_putchar('-');
	while (pv >= 1)
	{
		d = (nabs - (nabs % pv)) / pv;
		_putchar('0' + d);

		nabs = nabs % pv;
		pv = pv / 10;
	}
}
