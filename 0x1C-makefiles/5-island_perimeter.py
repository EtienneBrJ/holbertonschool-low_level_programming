#!/usr/bin/python3
""" Module island perimeter"""


def island_perimeter(grid):
    """ Returns the perimeter of the island
        described in grid
    """
    if grid is not list:
        return 0
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col]:
                if row - 1 >= 0:  # check for upper cell
                    if grid[row - 1][col] == 0:
                        perimeter += 1
                if row + 1 >= 0:  # check for lower cell
                    if grid[row + 1][col] == 0:
                        perimeter += 1
                if col - 1 >= 0:  # check for right cell
                    if grid[row][col - 1] == 0:
                        perimeter += 1
                if col + 1 >= 0:  # check for left cell
                    if grid[row][col + 1] == 0:
                        perimeter += 1

    return perimeter
