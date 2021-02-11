#include "holberton.h"
/**
 * print_most_numbers - Print the numbers form 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
