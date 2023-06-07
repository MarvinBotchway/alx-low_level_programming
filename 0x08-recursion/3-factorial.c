#include "main.h"
/**
 * factorial - Calculates and returns the factorial of a given number.
 * @n: The number which would have its factorial calculated.
 * Return: -1 if n < 0 otherwise 1.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
