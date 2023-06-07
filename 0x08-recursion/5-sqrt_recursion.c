#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The natural square root of a number or -1 or 1.
 */
int _sqrt_recursion(int n)
{
	int res = calc_sqrt(n, 1);

	return (res);
}

/**
 * calc_sqrt - Calculates the square root of n by recursively increasing c.
 * @n: Number to find square root of.
 * @c: Number to increment.
 *
 * Return: The square root
 * otherwise if n doesn't have a square root return -1.
 */
int calc_sqrt(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c * c > n)
		return (-1);
	else
		return (calc_sqrt(n, c + 1));

}
