#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integer
 * @a: Pointer to array
 * @n: Number of elements in the array
 */
void print_array(int *a, int n)
{
	int l;

	n = 0;

	while (a[n] != '\0')
	{
		n++;
	}
	for (l = 0; l < n - 1; l++)
	{
		if (l != 0)
		{
			printf(", %d", a[l]);
		}
		else
		{
			printf("%d", a[l]);
		}
	}
	printf("\n");
}
