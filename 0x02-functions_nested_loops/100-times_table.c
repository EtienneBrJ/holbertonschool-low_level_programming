#include "holberton.h"

/**
 * print_times_table - Print times table for 0 to 15 included
 * @n: Integer to multiply
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, k;

	k = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (k < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else if (k >= 10 && k < 100)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else if (k >= 100)
					{
						     _putchar((k / 100) + '0');
						     _putchar(((k / 10) % 10) + '0');
						     _putchar((k % 10) + '0');
					}
				}
				else
					_putchar(k + '0');
			}
			_putchar('\n');
		}
	}
}
