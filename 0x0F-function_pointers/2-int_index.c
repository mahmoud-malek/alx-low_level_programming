#include <stdio.h>
#include <string.h>

/**
 * int_index - a function that searches for an integer.
 * @array: an array of integers
 * @size: is the size of the array
 * @cmp: is a pointer to funciton
 * Return: index of the first element for
 * which the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size < 1)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
