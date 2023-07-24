#include <stdio.h>
#include "main.h"

/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: string to be reversed
 */

void puts_half(char *str)
{
	int len = 0, i;
	char *c = str;

	while (*c != '\0')
	{
		len++;
		c++;
	}

	for (i = len / 2; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
