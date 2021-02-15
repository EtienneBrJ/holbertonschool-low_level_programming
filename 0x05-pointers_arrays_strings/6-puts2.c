#include "holberton.h"

/**
 * puts2 - print one out of 2 character of a string, \n
 * @str: string which is written one character out of two
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
