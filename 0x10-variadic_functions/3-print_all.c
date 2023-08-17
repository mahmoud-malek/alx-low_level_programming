#include "variadic_functions.h"

/**
 * print_all - a function that prints strings, followed by a new line
 * @format: is the specifier to be printted
 */

void print_all(const char *const format, ...)
{
	va_list vals;
	int i = 0;
	char *sep = "", *str;

	va_start(vals, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(vals, int));
			sep = ", ";
			break;

		case 'i':
			printf("%s%d", sep, va_arg(vals, int));
			sep = ", ";
			break;

		case 'f':
			printf("%s%f", sep, va_arg(vals, double));
			sep = ", ";
			break;

		case 's':
			str = va_arg(vals, char *);
			if (str == NULL)
				str = "(nil)";

			printf("%s%s", sep, str);
			sep = ", ";
			break;
		}

		i++;
	}

	printf("\n");
	va_end(vals);
}
