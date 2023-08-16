#include <stdio.h>
#include <string.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: an array of integers
 * @size: is the size of the array
 * @action: is a pointer to funciton
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
