#include "main.h"
/**
  * _isdigit - Checks if c is a digit (0 to 9).
  * @c: Input to be checked.
  *
  * Return: 1 if c is a digit and 0 otherwise
  */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
