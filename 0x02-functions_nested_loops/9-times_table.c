#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Always (void).
 */
void times_table(void)
{
	int i, j = 0;
	int mult, a, b = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = j * i;
			if (mult <= 9)
			{
				if ((j > 0))
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				b = mult % 10;
				a = (mult - b) / 10;
				_putchar(' ');
				_putchar(a + '0');
				_putchar(b + '0');
			}
			if (j != 9)
				_putchar(',');
		
		}
		_putchar('\n');
	}
}
