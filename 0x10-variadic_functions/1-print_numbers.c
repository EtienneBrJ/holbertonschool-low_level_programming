#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string
 * @n: uns. int
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (!separator || i == 0)
			printf("%d", num);
		else
			printf("%s%d", separator, num);
	}
	printf("\n");
	va_end(ap);
}
