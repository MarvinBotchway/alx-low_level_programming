#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Write a program that prints the alphabet in lowercase,
  * followed by a new line.
  *
  * Return: 0 if successfull 1 otherwise
  */


int main(void)
{

	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	/* Find value of last number by using mod of 10 */
	last_num = n % 10;

	if (last_num > 5)
		printf("%d and is greater than 5\n", last_num);
	else if (last_num < 6)
	{
		if (last_num == 0)
			printf("%d and is 0\n", last_num);
		else
			printf("%d and is less than 6 and not 0\n", last_num);
	}
	return (0);
}
