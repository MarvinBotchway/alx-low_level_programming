#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and
 * print the result of the multiplication, followed by a new line
 * @argc: The number of argument entered for main
 * plus the program name.
 * @argv: An array of the string values of arguments
 * Return: 0 if successful 1 otherwise
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d", x * y);
	}
	return (0);
}
