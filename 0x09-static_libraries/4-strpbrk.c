#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: source buffer
 * @accept: distination
 * Return: pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}

		s++;
	}

	return (NULL);
}
