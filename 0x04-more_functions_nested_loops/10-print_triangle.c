#include<stdio.h>
#include "main.h"

/**
* print_triangle - a function that prints a triangle, followed by a new line.
* @size: Where size is the size of the triangle
* Return: implicit return 
*/

void print_triangle(int size)
{
	int i, space, c;

	for (i = 0; i < size; i++)
	{
		for (space = i; space < (size - 1); space++)
			_putchar(' ');

		for (c = 0; c < i+1; c++)
			_putchar('#');

		_putchar('\n');  
	}
}
