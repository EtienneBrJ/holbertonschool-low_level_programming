#include "holberton.h"
/**
 * times_table - Prints the 9 times table
 * @void: Null
 * Return: 0
 */
void times_table(void)
{
	int l, m, k;

	for (l = 0; l < 10; l++)
	{
		for (m = 0; m < 10; m++)
		{
			k = l * m;
			if (m == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && m != 0)
			{
				_putchar(',');
			        _putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
			        _putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			}
		_putchar('\n');
	}
}
