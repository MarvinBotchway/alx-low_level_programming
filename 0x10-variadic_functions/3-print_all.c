#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%p", NULL);
					break;
				}
				printf("%s", str);
				break;
		}
		if ((
			format[i] == 's' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 'c')
			&& format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
