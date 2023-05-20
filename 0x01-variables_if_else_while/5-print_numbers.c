#include <stdio.h>
/**
 * main - Prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 *
 * Return: 0 if Successful 1 otherwise
 */

int main(void)
{
	int digi;

	for (digi = 0; digi < 10; digi++)
		printf("%d", digi);
	printf("\n");
	return (0);
}

