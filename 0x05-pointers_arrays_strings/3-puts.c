#include "holberton.h"

/**
 * _puts - Print a sting, followed by a new line
 * @str: Chars to output
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
