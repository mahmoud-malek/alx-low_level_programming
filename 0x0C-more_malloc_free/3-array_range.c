#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: number of elements
 * @max: the bytes of each element
 * Return: resulting pointer
*/

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
