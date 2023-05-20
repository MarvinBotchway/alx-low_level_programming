#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line..
 *
 * Return: 0 if successfull 1 otherwise
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
