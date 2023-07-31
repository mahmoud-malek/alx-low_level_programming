#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr -  function that searches a string for any of a set of bytes.
 * @haystack: source buffer
 * @needle: distination
 * Return: pointer to the byte in s that matches
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{

		if (*haystack == *needle)
		{
			char *p = haystack;
			 char *ptr = needle;
			 int found = 1;

			while (*ptr != '\0' && *p != '\0')
			{
				if (*ptr != *p)
				{
					found = 0;
					break;
				}
					ptr++;
					p++;
			}

			if (found)
				return (haystack);

		}

		haystack++;
	}

	return (NULL);
}
