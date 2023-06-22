#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function.
 * Return: (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *arg;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg == NULL)
			printf("%p", arg);
		else
			printf("%s", arg);
		if (separator != NULL && n != (i + 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);

}
