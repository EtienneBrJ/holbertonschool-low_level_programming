#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: Int to 98
 * Return: 0
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			} else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	} else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			} else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
}
