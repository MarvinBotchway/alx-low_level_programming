#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory
 * pointed to by (s) with the constant byte (b).
 * @s: Pointer to memory area.
 * @b: A Constant byte.
 * @n: Bytes of memory to fill.
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
