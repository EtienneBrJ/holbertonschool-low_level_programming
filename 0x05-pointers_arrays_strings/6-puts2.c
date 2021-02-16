#include "holberton.h"

/**
 * puts2 - print one out of 2 character of a string, \n
 * @str: string which is written one character out of two
 */
void puts2(char *str)
{
	int i = 0;
	int pair;

	while (str[i] != '\0')
	{
		i++;
	}
	for (pair = 0; pair < i; pair += 2)
	{
		_putchar(str[pair]);
	}
	_putchar('\n');
}
