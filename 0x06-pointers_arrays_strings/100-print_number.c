#include "holberton.h"
/**
 * print_number - Print an int
 * @n: Int to print
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
		n *= 1;
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}