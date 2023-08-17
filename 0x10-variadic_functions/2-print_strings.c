#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: a string to print between
 * @n: num of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vals;
	unsigned int i;
	char *str;

	va_start(vals, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vals, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(vals);
	printf("\n");
}
