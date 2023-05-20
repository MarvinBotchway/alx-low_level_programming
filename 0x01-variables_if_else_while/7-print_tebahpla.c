#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	/* Using ascii decimal values for alphabet*/
	for (a = 122; a > 96; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
