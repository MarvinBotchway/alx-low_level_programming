#include "main.h"
/**
 * _strncpy - Copy string or part of string of size 'n'.
 * @dest: Pointer to be copied to.
 * @src: Pointer to copy from.
 * @n: Size of src to copy.
 * Return: Pointer to string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
;
	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
