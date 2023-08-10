#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size to allocate
 * Return: resulting pointer
*/

void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (res == NULL)
		exit(98);

	return (res);
}
