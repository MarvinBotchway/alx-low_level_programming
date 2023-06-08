#include "main.h"
/**
 * check_prime_num - Check prime number while comparing with x
 * @n: The number to check.
 * @a: The iterator to check against n
 * Return: 1 if n is a prime number and 0 otherwise.
 */
int check_prime_num(int n, int a)
{
	if (a > 1 && n % a == 0)
		return (0);
	else if (n <= 1)
		return (0);
	else if ((n / a) < a)
		return (1);
	else
		return (check_prime_num(n, a + 1));
}

/**
 * is_prime_number - Checks if the number n is a prime number
 * @n: Number to check.
 * Return: (1) if n is a prime number, otherwise (0).
 */
int is_prime_number(int n)
{
	return (check_prime_num(n, 1));
}


