#include "main.h"
/**
 * _strcpy - Makes a copy for the string pointed to by src plus
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to dest.
 * @src: Pointer to source string.
 * Return: char a pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
