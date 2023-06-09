#include <stdio.h>
/**
 * main - Prints the name of the program
 * followed by a new line.
 * @argc: Number of arguments (argv).
 * @argv: Array of arguments passed to program.
 * Return: 0 if successfull 1 otherwise.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
