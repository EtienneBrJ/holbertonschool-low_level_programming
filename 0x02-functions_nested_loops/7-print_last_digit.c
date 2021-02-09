#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Number
 * Return: 0
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
		a = n % 10;
	_putchar(a + '0');
	return (a);
}