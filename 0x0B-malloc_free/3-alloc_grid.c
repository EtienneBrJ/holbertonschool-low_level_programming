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

	p = malloc(sizeof(int *) * height);/*Allocate memory for width*/
	if (p == NULL)
		return (NULL);

	for (iHeight = 0; iHeight < height; iHeight++) /*Allocate memory for h/col*/
	{
		p[iHeight] = malloc(sizeof(int) * width);
		if (p[iHeight] == NULL)
		{
			for (i = 0; i <= iHeight; i++)
			{
				free(p[iHeight]);
			}
			free(p);
			return (NULL);
		}
	}
	for (iHeight = 0; iHeight < height; iHeight++)
	{                                          /*Copy the date in 2D array*/
		for (iWidth = 0; iWidth < width; iWidth++)
		{
			p[iHeight][iWidth] = 0;
		}
	}
	return (p);
}
