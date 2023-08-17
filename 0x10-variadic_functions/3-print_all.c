#include "variadic_functions.h"

/**
 * print_all - a function that prints strings, followed by a new line
 * @format: is the specifier to be printted
 */

void print_all(const char *const format, ...)
{
	va_list vals;
	int i = 0, found, len = strlen(format);
	char *str;

	va_start(vals, format);
	while (i < len && format)
	{
		found = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vals, int));
			found = 1;
			break;
		case 'i':
			printf("%d", va_arg(vals, int));
			found = 1;
			break;
		case 'f':
			printf("%f", va_arg(vals, double));
			found = 1;
			break;
		case 's':
			found = 1;
			str = va_arg(vals, char *);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);
			break;
		}

		if (i < len - 1 && found)
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(vals);
}
