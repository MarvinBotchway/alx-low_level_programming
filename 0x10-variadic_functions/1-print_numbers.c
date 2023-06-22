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
		printf("%d", va_arg(args, const unsigned int));
		if (separator != NULL && n != (i + 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
