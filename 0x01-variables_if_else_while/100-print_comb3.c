#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num0, num1;

	for (num0 = 48; num0 < 58; num0++)
	{
		for (num1 = 48; num1 < 58; num1++)
		{
			if (num0 != num1 && num0 < num1)
			{
				putchar(num0);
				putchar(num1);

				if (num1 == 57 && num0 == 56)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
