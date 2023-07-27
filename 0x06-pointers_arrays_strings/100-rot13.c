#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string to modify
 * Return: the resulting string
 */

char *rot13(char *s)
{
	char *e = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *l = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == e[j])
			{
				s[i] = l[j];
				break;
			}
		}
	}
	return (s);
}
