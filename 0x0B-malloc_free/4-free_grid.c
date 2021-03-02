#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D previously created
 * by alloc_grid
 *
 * @grid: address of the 2D grid
 * @height: height of the grid
 * Return: 0
 **/
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;

	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
