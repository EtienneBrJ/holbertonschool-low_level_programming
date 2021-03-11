#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: nb of args
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (!s)
			s = "(nil)";
		if (!separator || i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	va_end(ap);
	printf("\n");
}
