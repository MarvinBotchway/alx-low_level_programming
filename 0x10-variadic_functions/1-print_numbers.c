#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of args.
 * Return: (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (separator)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));

			if (i + 2 == n)
				break;
		}
		printf("%d\n", va_arg(args, int));
		va_end(args);
	}

}
