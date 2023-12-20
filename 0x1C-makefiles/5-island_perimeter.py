#!/usr/bin/python3

""" Is a module that defines a function to find
perimeter of the island in a grid"""


def island_perimeter(grid):
    """ a function that returns the perimeter of an island
    inside a grid
    """
    length = len(grid)
    num_of_ones = 0
    for i in range(length):
        for j in range(length):
            if (grid[i][j] == 1):
                num_of_ones += 1

    return (num_of_ones + 1) * 2
