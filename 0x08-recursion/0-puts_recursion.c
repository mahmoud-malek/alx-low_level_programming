#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints string recursively
 * @s: buffer to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	printf("%c", *s);
	_puts_recursion(s += 1);
}
