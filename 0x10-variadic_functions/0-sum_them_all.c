#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of args
 * Return: sum of them
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list values;

	va_start(values, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(values, int);
	}

	va_end(values);
	return (sum);
}
