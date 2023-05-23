#include "main.h"
/**
  * _islower - Checks for lowercase character.
  * @c: The character
  *
  * Return: 1 if is lowercase character. 0 otherwise
  */

int _islower(int c)
{
	int val;

	if (c >= 'a' && c <= 'z')
		val = 1;
	else
		val = 0;
	return (val);
}
