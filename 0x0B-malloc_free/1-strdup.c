#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -returns a pointer to a newly allocated space in memory,
 * @str: the size of the required array
 * Return: Resulting array
*/

char *_strdup(char *str)
{
	char *res = malloc(strlen(str));
	unsigned long i;

	if (res == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < strlen(str) ; i++)
	{
		res[i] = str[i];
	}

	return (res);
}

