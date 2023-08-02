#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints string recursively
 * @s: buffer to print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
