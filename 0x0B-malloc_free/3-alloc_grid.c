#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid -returns a pointer to a 2 dimensional array of integers
 * @height: hieght of the array
 * @width: width of the array
 * Return: Resulting array
*/

int **alloc_grid(int width, int height)
{
	int **res;
	int i, j, k;

	if (width < 1 || height < 1)
		return (NULL);

	res = (int **) malloc((height) * sizeof(int *));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		res[i] = (int *) malloc(width * sizeof(int));

		if (res[i] == NULL)
		{


			for (k = 0; k < i; k++)
			{
				free(res[k]);
			}
			free(res);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			res[i][j] = 0;

	return (res);
}

