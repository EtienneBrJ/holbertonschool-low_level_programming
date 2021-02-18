#include "holberton.h"
/**
 * print_number - Print an int
 * @n: Int to print
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i;

	i = 0;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
