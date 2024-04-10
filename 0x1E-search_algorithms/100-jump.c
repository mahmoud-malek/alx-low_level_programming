#include "search_algos.h"

/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: is the array of the numbers
 * @size: is the number of elements
 * @value: is the target value to search for
 * Return: index of target if exists, -1 ohtherwise.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, low = 0, high = 0;

	if (!array)
		return (-1);

	jump = sqrt(size);
	while (array[MIN(high, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high += jump;

		if (high >= size)
			break;
	}


	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (array[low] < value)
	{

		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		low++;
		if (low > MIN(high, size - 1))
			return (-1);

	}

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	if (array[low] == value)
		return (low);

	return (-1);
}

