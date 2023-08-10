#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: the bytes of each element
 * Return: resulting pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	/*
	* we used char *ptr so that each element has 1 byte
	* and we want to fill each byte by 0
	*/

	ptr = result;

	for (i = 0; i < nmemb * size ; i++)
		ptr[i] = 0;

	return (result);
}
