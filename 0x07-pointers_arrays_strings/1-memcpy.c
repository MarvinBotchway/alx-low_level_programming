#include "main.h"
/**
 * _memcpy - Copies (n) bytes from
 * memory area named (src) to memory area named (dest).
 * @n: Bytes to copied.
 * @src: Number of bytes to copy.
 * @dest: Destination to copy to.
 * Return: Pointer to (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
