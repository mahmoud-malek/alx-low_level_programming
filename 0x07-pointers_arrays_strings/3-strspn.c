#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: source buffer
 * @accept: distination
 * Return: length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt = 0;

	for (i = 0; i < strlen(s); i++)
	{
		int found = 0;

		for (j = 0; j < strlen(accept); j++)
		{

			if (s[i] == accept[j])
			{
				cnt++;
				found = 1;
				break;
			}
		}

		if (!found)
			break;
	}

	return (cnt);
}

