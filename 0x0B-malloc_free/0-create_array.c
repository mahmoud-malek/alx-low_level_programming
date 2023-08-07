#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars, and initializes it
 * @size: the size of the required array
 * @c: char to inialize the array with
 * Return: Resulting array
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	char *res = array;


	if (!size && array != NULL)
	{
		return (NULL);
	}

	while (size--)
	{
		*array = c;
		array++;
	}

	return (res);
}

