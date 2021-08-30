#include "search_algos.h"

/**
 * linear_search - Searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int flag = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value && flag == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (i);
	else
		return (-1);
}
