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
		printf("%s", separator);
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vals, int));
			break;
		case 'i':
			printf("%d", va_arg(vals, int));
			break;
		case 'f':
			printf("%f", va_arg(vals, double));
			break;
		case 's':
		{
			char *v = va_arg(vals, char *);

			if (v == NULL)
			{
				v = "(nil)";
			}
			printf("%s", v);
			break;
		}
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(vals);
}
}
