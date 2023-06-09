#include <stdio.h>
/**
 * main - Prints all arguments received.
 * @argc: Number of arguments passed
 * plus the name of the program
 * @argv: String values of arguments.
 * Return: 0 if successfull 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
