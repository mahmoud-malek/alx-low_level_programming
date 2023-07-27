#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 * @s: string to modify
 * Return: the resulting string
 */

char *leet(char *s)
{
	char *e = "aeotl";
	char *l = "43071";
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		char c = tolower(s[i]);

		for (j = 0; j < 5; j++)
		{
			if (c == e[j])
			{
				s[i] = l[j];
				break;
			}
		}
	}
	return (s);
}
