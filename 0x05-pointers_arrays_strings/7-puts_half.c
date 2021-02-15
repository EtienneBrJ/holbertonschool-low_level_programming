#include "holberton.h"
/**
 * puts_half - print the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, l;

	for (i = 0; str[i] != '\0'; i++)
	{
		l = i + 1; /*At the end of the loop, l takes i max*/
	}
	if (l % 2 == 0)
	{
		for (l = l / 2; str[l] != '\0'; l++)
		{
			_putchar(str[l]);
		}
		_putchar('\n');
	}
	else
	{
		for (l = (l - 1) / 2; str[l] != '\0'; l++)
		{
			_putchar(str[l + 1]);
		}
		_putchar('\n');
	}
}
