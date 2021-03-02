#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: a pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int iWidth, iHeight, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * width); /* Allocate memory for width/rox */

	if (p == NULL)
		return (NULL);
	for (iWidth = 0; iWidth < width; iWidth++) /*Allocate memory for h/col*/
	{
		p[iWidth] = malloc(sizeof(int) * height);
		if (p[iWidth] == NULL)
		{
			free(p);
			for (i = 0; i <= iWidth; i++)
			{
				free(p[iWidth]);
			}
			return (NULL);
		}
	}
	for (iWidth = 0; iWidth < width; iWidth++)
	{                                          /*Copy the date in 2D array*/
		for (iHeight = 0; iHeight < height; iHeight++)
		{
			p[iWidth][iHeight] = 0;
		}
	}
	return (p);
}
