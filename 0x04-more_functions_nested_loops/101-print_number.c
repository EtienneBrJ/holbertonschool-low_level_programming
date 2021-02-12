#include "holberton.h"
/**
 * print_number - Print an integer
 * @n: Int to print
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100 % 10) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000 && n > 100)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 100 && n > 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
