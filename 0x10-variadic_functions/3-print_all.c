#include "variadic_functions.h"

/**
 * print_int - a function that prints strings, followed by a new line
 * @list: is the specifier to be printted
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_char - a function that prints strings, followed by a new line
 * @list: is the specifier to be printted
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - a function that prints strings, followed by a new line
 * @list: is the specifier to be printted
 */

void print_string(va_list list)
{
	char *v = va_arg(list, char *);

	if (v != NULL)
	{
		printf("%s", v);
		return;
	}

	printf("(nil)");
}

/**
 * print_float - a function that prints strings, followed by a new line
 * @list: is the specifier to be printted
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - a function that prints strings, followed by a new line
 * @format: is the specifier to be printted
 */

void print_all(const char *const format, ...)
{
	int i, j = 0;
	va_list vals;
	char *separator = "";

	print pr[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}};

	va_start(vals, format);

	while (format && format[j])
	{
		i = 0;
		while (pr[i].str != NULL)
		{
			if (format[j] == pr[i].str[0])
			{
				printf("%s", separator);
				pr[i].f(vals);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(vals);
}
