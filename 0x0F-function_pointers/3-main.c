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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	c = argv[2];

	if (*c != '+' || *c != '-' || *c != '*' || *c != '/' || *c != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' || *c == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c)(atoi(argv[1]), atoi(argv[3])));


	return (0);
}
