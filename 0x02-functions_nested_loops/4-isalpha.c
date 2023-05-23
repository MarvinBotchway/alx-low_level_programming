#include "main.h"
/**
  * _isalpha - Checks for alphabetic character
  *
  * @c: The character to be checked
  *
  * Return: 1 if is a letter or 0 if not.
  *
  */

int _isalpha(int c)
{
	int val = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		val = 1;
	return (val);
}
