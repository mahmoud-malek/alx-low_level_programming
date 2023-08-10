#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * min - return min of two integers
 * @a: value
 * @b: value
 * Return: minimum value
*/

int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer of previously allocated memory
 * @old_size: size of above pointer
 * @new_size: required size
 * Return: resulting pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *res;
	char *tmp;
	char *tmp2;
	int i;

	if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else if (ptr == NULL && new_size > 0)
	{
		res = malloc(new_size);
		if (res == NULL)
			return (NULL);

		return (res);
	}

	else if (ptr == NULL)
	{
		return (NULL);
	}
		res = malloc(new_size);
		if (res == NULL)
			return (NULL);

		tmp = res;
		tmp2 = ptr;

		for (i = 0; i < min(old_size, new_size); i++)
			tmp[i] = tmp2[i];

		free(ptr);
		return (res);
}
