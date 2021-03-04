#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first case of the array
 * @max: last case of the array
 *
 * Return: pointer to the newly created array
 **/
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (!a)
		return (NULL);

	while (min <= max)
		a[i++] = min++;

	return (a);
}
