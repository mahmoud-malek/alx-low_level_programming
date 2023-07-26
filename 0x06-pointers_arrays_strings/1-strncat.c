#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination input
 * @src: source input
 * @n: number of bytes to cat
 * Return: pointer to resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while ((*ptr++ = *src++) && --n)
	;

	*ptr = '\0';

	return (dest);
}
