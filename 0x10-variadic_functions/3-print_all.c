#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "print_all.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return : (void)
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;

	format_t fts[] = {
		{'c', "%c"},
		{'i', "%i"},
		{'f', "%f"},
		{'s', "%s"},
		{'\0', ""}
	};

	va_start(args, format);

	while (fts[i].c != '\0' || format[i] == fts[i].c)
	{
		if (fts[i].c == 'c' || fts[i].c == 'i')
			printf(fts[i].str, va_arg(args, int));
		if (fts[i].c == 'f')
			printf(fts[i].str, va_arg(args, double));
		if (fts[i].c == 's')
			printf(fts[i].str, va_arg(args, char *));
		if (fts[i + 1].c != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(args);

}
