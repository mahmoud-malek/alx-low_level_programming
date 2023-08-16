#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: is a pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
