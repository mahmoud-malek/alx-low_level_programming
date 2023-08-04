#include <stdio.h>
#include "main.h"

/**
* _puts - a function that returns the length of a string.
* @str: value to work on
* Return: 0 (success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str++);
	}

	printf("\n");
}
