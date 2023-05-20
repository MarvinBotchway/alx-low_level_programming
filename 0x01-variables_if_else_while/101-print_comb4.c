#include <stdio.h>
/**
  * main - Prints all possible different combinations of three digits.
  *
  * Return: 0 if successful 1 otherwise.
  */

int main(void)
{
	int num0, num1, num2;

	num1 = 48;
	num2 = 48;

	for (num0 = 48; num0 <= 55; num0++)
	{
		num1 = num0 + 1;
		while (num1 <= 56)
		{
			num2 = num1 + 1;
			while (num2 <= 57)
			{
				putchar(num0);
				putchar(num1);
				putchar(num2);
				if (num0 < 55)
				{
					putchar(',');
					putchar(' ');
				}
				num2++;
			}
			num1++;
		}
	}
	putchar('\n');
	return (0);
}
