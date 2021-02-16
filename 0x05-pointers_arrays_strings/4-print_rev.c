#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: value of the variable S
 */
void print_rev(char *s)
{
	int plus = 0;
	int i;

	while (s[plus] != '\0')
	{
		plus++;
	}
	for (i = plus - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
