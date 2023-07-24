#include <stdio.h>
#include "main.h"

/**
 * print_rev - returns string in reverse order
 * @s: value to work on
 * Return: 0 (success)
*/

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	for (; len >= 0 ; len--)
	{
		printf("%c", s[len]);
	}

	printf("\n");
}
