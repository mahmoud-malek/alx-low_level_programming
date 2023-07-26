#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - a function that concatenates two strings.
 * @s1: destination input
 * @s2: source input
 * Return: pointer to resulting string dest
*/

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (0);
}
