#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: numbers of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int min = 0;
	int max = n - 1;

	for (min = 0; min < max; min++, max--)
	{
		temp = a[min];
		a[min] = a[max];
		a[max] = temp;
	}
}
