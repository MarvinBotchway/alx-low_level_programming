#include "main.h"
/**
  * more_numbers - Prints 10 times the numbers, from  0 - 14, followed by a new line
  *
  * Return: void
  */
void more_numbers(void)
{
	int ln, num;

	ln = 1;
	for (;ln <= 10; ln++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');

		}
		_putchar('\n');
	}
}
