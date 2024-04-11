#include "search_algos.h"

/**
 * interpolation_search -  a function that searches for a value in
 * a sorted array of integers using the Interpolation search algorithm
 * @array: sorted set of numbers
 * @size: size of the set
 * @value: is the target to search for
 * Return: the index of the target
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = (low + (((double)(high - low)
			/ (array[high] - array[low])) * (value - array[low])));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
