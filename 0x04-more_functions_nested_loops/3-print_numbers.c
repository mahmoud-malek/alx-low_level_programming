#include <stdio.h>
#include "main.h"

/**
* print_numbers - a function that prints the numbers, from 0 to 9
* @void: takes nothing
* Return: it's implicit return function
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);

	_putchar('\n');
}
