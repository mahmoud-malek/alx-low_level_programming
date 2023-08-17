#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: a string to print between
 * @n: num of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *ptr;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);

		if (i < n - 1 && separator != NULL)
			printf("%s%s", (ptr != NULL) ? ptr : "(nil)", separator);
		else
			printf("%s", (ptr != NULL) ? ptr : "(nil)");
	}

	va_end(args);
	printf("\n");
}
