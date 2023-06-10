#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add positive numbers and
 * print the result, followed by a new line
 * @argc: The number of argument entered for main
 * plus the program name.
 * @argv: An array of the string values of arguments
 * Return: 0 if successful 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
