#include "variadic_functions.h"

/**
 * print_all - a function that prints strings, followed by a new line
 * @format: is the specifier to be printted
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	va_list vals;
	char *separator = "";

	va_start(vals, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(vals, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s%d", separator, va_arg(vals, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(vals, double));
			separator = ", ";
			break;
		case 's':
		{
			char *v = va_arg(vals, char *);

			if (v == NULL)
				v = "(nil)";
			printf("%s%s", separator, v);
			separator = ", ";
			break;
		}
		default:
			i++;
			continue;
		}
		i++;
	}
	printf("\n");
	va_end(vals);
}
