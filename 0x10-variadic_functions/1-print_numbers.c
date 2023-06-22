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

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			printf("%s", separator);
		if (i + 2 == n)
			break;
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);

}
