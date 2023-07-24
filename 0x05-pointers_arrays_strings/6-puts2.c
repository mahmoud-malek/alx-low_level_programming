#include <stdio.h>
#include "main.h"

/**
 * puts2 - reverses a string
 * @str: string to be reversed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0' ; i++)
	{
		if (i % 2 == 0)
			printf("%c", *str);
		str++;
	}
	printf("\n");
}
