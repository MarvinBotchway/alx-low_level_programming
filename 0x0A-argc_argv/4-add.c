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
	int i, sum;

	i = 1;
	sum = 0;
	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0)
			{
				if (atoi(argv[i]) == 0 && *argv[i] != '0')
				{
					printf("Error\n");
					return (1);
				}
				else
					sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
