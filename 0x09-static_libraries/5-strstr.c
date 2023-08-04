#include "main.h"
#include <stdio.h>

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
		char *p = haystack;
		char *q = needle;

		while (*q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
