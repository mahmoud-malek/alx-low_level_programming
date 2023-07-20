#include <stdio.h>
#include "main.h"

/**
* print_line - a function that draws a diagonal line on the terminal
* @n: is the number of times the character \ should be printed
* Return: diagnoal shape
*/

void print_line(int n)
{
	int i;


	if (n < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
