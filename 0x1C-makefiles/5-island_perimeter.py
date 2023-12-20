#!/usr/bin/python3

""" Is a module that defines a function to find
perimeter of the island in a grid"""


def island_perimeter(grid):
    """ a function that returns the perimeter of an island
    inside a grid
    """
    length = len(grid)
    perimeter = 0
    for i in range(length):
        inner_len = len(grid[i])
        for j in range(inner_len):
            if (grid[i][j] == 1):
                # Check top edge
                if grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom edge
                if grid[i + 1][j] == 0:
                    perimeter += 1
                # Check left edge
                if grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right edge
                if grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
