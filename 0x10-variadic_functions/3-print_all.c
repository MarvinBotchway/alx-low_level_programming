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
	char *str;

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
		switch (fts[i].c)
		{
			case 'c':
				printf(fts[i].str, va_arg(args, int));
				break;
			case 'i':
				printf(fts[i].str, va_arg(args, int));
				break;
			case 'f':
				printf(fts[i].str, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (fts[i + 1].c != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(args);

}
