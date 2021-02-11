#include "holberton.h"
/**
 * print_triangle - print a triangle, followed by a new line
 * @size: Size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int row, j;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j > row)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
