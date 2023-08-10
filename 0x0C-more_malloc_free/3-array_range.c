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
	int i, len;
	int *ptr, *cpy;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	cpy = ptr;
	for (i = min; i <= max; i++)
		*(cpy++) = i;

	return (ptr);
}
