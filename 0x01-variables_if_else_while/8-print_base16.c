#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: 0 if successful 1 otherwise
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (num = 97; num < 103; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

