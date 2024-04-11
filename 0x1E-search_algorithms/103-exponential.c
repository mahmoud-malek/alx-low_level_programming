#include "search_algos.h"

int binary_search2(int *array, int top, int down, int value);
/**
 * binary_search2 - a function that searches for a value of
 * sorted array of integers
 * @array: is the set of integers
 * @top: is the top of the array
 * @down: is the bottom of the array
 * @value: is the target to search for
 * Return: index of the target value, -1 otherwise
 */

int binary_search2(int *array, int top, int down, int value)
{
	int mid, i;

	if (!array)
		return (-1);


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

/**
 * exponential_search - a function that searches for a value in a sorted array
 * @array: sorted array of integers
 * @size: size of the sorted array
 * @value: is the target value to search for
 * Return: the index of the terget value.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);

	while (i < size &&  array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	i /= 2;

	printf("Value found between indexes [%ld] and [%ld]\n",
	 i, MIN((i * 2), size - 1));
	return (binary_search2(array, MIN((i * 2), size - 1), i, value));
}
