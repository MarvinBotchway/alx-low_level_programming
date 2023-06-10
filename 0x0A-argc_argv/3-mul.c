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
	int j, k;
	int x = 0;
	int y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		for (j = 1; j < argc; j++)
		{
			for (k = 0; argv[j][k] != '\0'; k++)
			{
				if (argv[j][k] < 48 || argv[j][k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
