#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Number of arguments + the filename
 * @argv: Sting values for each argument + the filename.
 * Return: 0 if successful and 1 otherwise with exit code 98.
 */

int main(int argc, char *argv[])
{
	char *c;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	c = argv[2];
	b = atoi(argv[3]);

	if (
	(*c != '+' &&
	*c != '-' &&
	*c != '*' &&
	*c != '/' &&
	*c != '%')
	||
	*(c + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' && b == 0) || (*c == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c)(a, b));

	return (0);
}
