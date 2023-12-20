#!/usr/bin/python3

""" Is a module that defines a function to find
perimeter of the island in a grid"""


def island_perimeter(grid):
    """ a function that returns the perimeter of an island
    inside a grid
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            if (grid[i][j] == 1):
                # Check top edge
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom edge
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check left edge
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right edge
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
