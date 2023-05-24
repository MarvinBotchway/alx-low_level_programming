#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  *
  * @i: Number to whose abs value would be found
  *
  * Return: Absolute number
  */

int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
