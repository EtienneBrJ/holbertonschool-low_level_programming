#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments that can be passed to the function
 **/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
