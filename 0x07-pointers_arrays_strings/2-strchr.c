#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - unction that locates a character in a string.
 * @s: source buffer
 * @c: distination
 * Return: resulting pointer
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0';)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
