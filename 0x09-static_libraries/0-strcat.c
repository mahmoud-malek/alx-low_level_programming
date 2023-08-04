#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination input
 * @src: source input
 * Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while ((*ptr++ = *src++))

	*ptr = '\0';

	return (dest);
}

