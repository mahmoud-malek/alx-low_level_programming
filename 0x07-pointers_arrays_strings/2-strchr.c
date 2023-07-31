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
	int i;
	char *ans = NULL;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			ans = &s[i];
			break;
		}
	}

	return (ans);
}
