#include <stdio.h>
/**
  * main - Prints all possible combinations of two two-digit numbers.
  *
  * Return: 0 if Successful 1 otherwise
  */
int main(void)
{
	int n0, n10, n100, n1000;

	for (n1000 = 48; n1000 <= 57; n1000++)
	{
		for (n100 = 48; n100 < 57; n100++)
		{
			for (n10 = 48; n10 <= 57; n10++)
			{
				for (n0 = 48; n0 <= 57; n0++)
				{
					if (n10 >= n1000 && n0 > n100)
					{
						putchar(n1000);
						putchar(n100);
						putchar(' ');
						putchar(n10);
						putchar(n0);

						putchar(',');
						putchar(' ');
					
					}
				}
			}
		}
	}
	return (0);
}
