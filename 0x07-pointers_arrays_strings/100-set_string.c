#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: source to copy from
 * @to: dest to copy to it
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
