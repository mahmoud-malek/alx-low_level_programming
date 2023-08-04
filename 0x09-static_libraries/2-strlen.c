#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: value to work on
 * Return: 0 (success)
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
