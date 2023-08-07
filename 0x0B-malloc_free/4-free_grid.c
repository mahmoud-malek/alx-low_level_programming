#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid -unction that frees a 2 dimensional grid previously
 * @height: hieght of the array
 * @grid: the array
 * Return: Resulting array
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

