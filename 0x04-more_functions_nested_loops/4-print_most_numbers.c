#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
* @void: takes nothing
* Return: it's implicit return function
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
