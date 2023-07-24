#include <stdio.h>
#include "main.h"

/**
 * print_rev - returns string in reverse order
 * @s: value to work on
 * Return: 0 (success)
*/

void print_rev(char *s)
{
	char *p = s;

	while (*p)
	{
		p++;
	}

	p--;

	while (p >= s)
	{
		printf("%c", *p);
		p--;
	}

	printf("\n");
}
