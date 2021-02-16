#include "holberton.h"
/**
 * puts_half - print the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;
	int l;

	while (str[i])
	{
		i++;
	}
	i = i + 1;
	for (l = i / 2; l < i - 1; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
