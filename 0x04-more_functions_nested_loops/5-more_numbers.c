
#include <stdio.h>
#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers, from 0 to 14
* @void: takes nothing
* Return: it's implicit return function
*/

void more_numbers(void)
{
	int i, k;


	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + 48);

			_putchar((i % 10) + 48);
		}

		_putchar('\n');
	}
}
