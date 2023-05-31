#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: String to be concatenated to and returned
 * @src: String to concatenate
 * @n: Allowed legnth of src
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen, slen, i;

	dlen = 0;
	slen = 0;
	while (*(dest + dlen) != '\0')
		dlen++;
	while (*(src + slen) != '\0')
		slen++;

	if (slen < n)
		n = slen;

	for (i = 0; i < n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	if (slen < n)
		dest[dlen] = '\0';
	return (dest);
}
