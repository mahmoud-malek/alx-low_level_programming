#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: is string to insert between numbers
 * @n: is the number of args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vals;
	unsigned int i;

	va_start(vals, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vals, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(vals);
	printf("\n");
}
