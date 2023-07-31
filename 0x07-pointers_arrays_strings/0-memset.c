#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with constant byte b
 * @s: buffer
 * @b: character to fill with
 * @n: bytes to fill
 * Return: resulting pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
