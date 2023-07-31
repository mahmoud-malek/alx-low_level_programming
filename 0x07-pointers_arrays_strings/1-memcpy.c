#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies n bytes from memory
 * area src to memory area dest
 * @src: source buffer
 * @dest: distination
 * @n: size to fill
 * Return: resulting pointer
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned long int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
