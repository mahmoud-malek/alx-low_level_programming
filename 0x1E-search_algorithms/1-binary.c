#include "search_algos.h"

/**
 * binary_search - a function that searches for a value of
 * sorted array of integers
 * @array: is the set of integers
 * @size: is the length of the array
 * @value: is the target to search for
 * Return: index of the target value, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, top, down, i;

	if (!array)
		return (-1);

	top = size - 1;
	down = 0;

	while (top >= down)
	{
		mid = (top + down) / 2;

		printf("Searching in array:");
		for (i = down; i <= top; i++)
		{
			printf(" %d", array[i]);
			if (i < top)
			printf(",");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			top = mid - 1;
		else
			down = mid + 1;
	}

	return (-1);
}

