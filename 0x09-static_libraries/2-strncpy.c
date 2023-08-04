#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - a function that concatenates two strings.
 * @dest: destination input
 * @src: source input
 * @n: number of bytes to cat
 * Return: pointer to resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n && (src[i] != '\0'))
	{
		ptr[i] = src[i];
		i++;
	}

	while (i < n)
	{
		ptr[i++] = '\0';
	}
	return (dest);
}
