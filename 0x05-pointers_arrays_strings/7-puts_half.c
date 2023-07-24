#include <stdio.h>
#include "main.h"

/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: string to be reversed
 */

void puts_half(char *str)
{
	int len = 0, i = 0;
	char *c = str;

	while (*c != '\0')
	{
		len++;
		c++;
	}

	if (len % 2 != 0)
		i++;

	for (i += len / 2; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
