#include "main.h"
/**
 * print_triangle - Prints a triangles with # followed by a new line
 * @size: Size of the trinagle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				if (c >= (size - 1) - r)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
