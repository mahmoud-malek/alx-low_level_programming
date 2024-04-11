#include "search_algos.h"

/**
 * lower_bound - a function that searches for a value of
 * sorted array of integers
 * @array: is the set of integers
 * @top: is the top of the array
 * @down: is the bottom of the array
 * @value: is the target to search for
 * Return: index of the target value, -1 otherwise
 */

int lower_bound(int *array, int top, int down, int value)
{
	int mid = (top + down) / 2;
	int i;

	if (top == down && array[mid] != value)
		return (-1);

	printf("Searching in array:");
	for (i = down; i <= top; i++)
	{
		printf(" %d", array[i]);
		if (i < top)
			printf(",");
	}
	printf("\n");

	if (top == down)
		return (mid);

	if (array[mid] < value)
		return (lower_bound(array, top, mid + 1, value));

	return (lower_bound(array, mid, down, value));
}

/**
 * advanced_binary - a function that searches for a value of
 * sorted array of integers
 * @array: is the set of integers
 * @size: is the length of the array
 * @value: is the target to search for
 * Return: index of the target value, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (lower_bound(array, size - 1, 0, value));
}
