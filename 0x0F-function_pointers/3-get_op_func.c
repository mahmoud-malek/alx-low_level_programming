#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func -  function that selects the correct function
 * @s: is param of the function
 * Return: pointer to function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
