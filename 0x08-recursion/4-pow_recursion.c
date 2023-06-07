#include "main.h"
/**
 * _pow_recursion - Calculates and returns
 * the value of x raised to the power y.
 * @x: Integer to be raised to the power y.
 * @y: Integer that x is going to be raised to the power of.
 * Return: The value of x raised to the power of y (int)
 * or 1 or -1.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
