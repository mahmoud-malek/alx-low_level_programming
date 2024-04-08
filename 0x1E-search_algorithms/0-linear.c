#include "search_algos.h"

/**
 * linear_search - a simple algorithm to search for an integer
 * @array: is a pointer to the first element
 * @size: the length of the array
 * @value: is the target value to search for
 * Return: the index otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

