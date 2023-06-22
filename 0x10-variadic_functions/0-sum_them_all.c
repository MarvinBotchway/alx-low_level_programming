#include <stdarg.h>
/**
 * sum_them_all - Add all parameters and returns the sum
 * @n: The number of parameters.
 * Return: The sum if successful or 0 otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		va_end(args);
	}
	return (sum);
}
