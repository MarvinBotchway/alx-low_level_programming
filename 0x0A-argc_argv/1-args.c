#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * followed by a new line.
 * @argc: Number of arguments passed to main plus the program name.
 * @argv: String values for arguments passed to main function
 * plus the program name.
 * Return: 0 if successfull but 1 otherwise.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
