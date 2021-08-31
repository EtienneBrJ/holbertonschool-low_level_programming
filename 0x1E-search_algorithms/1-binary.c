#include "search_algos.h"

/**
  * print_array - print array with limits in l and r
  * @array: pointer to the first element of the array to search in
  * @l: low
  * @h: high
  */
void print_array(int *array, size_t l, size_t h)
{
	printf("Searching in array: ");
	while (l < h)
	{
		printf("%d, ", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, mid = 0;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		print_array(array, l, h);
		mid = (l + h) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			h = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
