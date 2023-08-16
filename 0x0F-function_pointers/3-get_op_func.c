#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func -  function that selects the correct function
 * @s: is param of the function
 * Return: pointer to function
*/

int (*get_op_func(char *s))(int, int)
{
	if (!s)
		return (NULL);

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 5;

	while (i--)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
