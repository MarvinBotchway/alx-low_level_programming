#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @c: The character to checked
  *
  * Return: 1 if c is uppercase and 0 otherwise
  */

int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
