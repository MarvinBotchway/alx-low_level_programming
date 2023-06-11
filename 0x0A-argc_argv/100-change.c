#include <stdio.h>
#include <stdlib.h>
/**
 * chk_argv - Determine if argv is a number
 * with no non numeric characters
 * @argv: String value for arguments passed to main.
 * Return: 0 if successful and 1 otherwise.
 */
int chk_argv(char *argv[])
{
	int k = 0;

	if (argv[1][0] == '-')
		k = 1;
	for (; argv[1][k] != '\0'; k++)
	{
		if (argv[1][k] < 48 || argv[1][k] > 57)
			return (1);
	}
	return (0);
}
/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Number of arguments + program name.
 * @argv: String value for arguments passed to main.
 * Return: 0 if successful and 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int coins[] = {1, 2, 5, 10, 25};
	int i, num, coin, change;

	num = coin = change = 0;
	change = atoi(argv[1]);
	if (argc == 2)
	{
		if (chk_argv(argv) == 1)
		{
			printf("Error\n");
			return (1);
		}

		for (i = 0; i < 5; i++)
		{
			if (change > coins[i])
			{
				coin = coins[i];
				if (coins[i] == 25 || coins[i + 1] > change)
				{
					change = change - coin;
					num++;
					i = 0;
				}
			}
			if (change == coins[i])
				num++;
		}
		printf("%d", num);
		if (change < 0)
			printf("\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
