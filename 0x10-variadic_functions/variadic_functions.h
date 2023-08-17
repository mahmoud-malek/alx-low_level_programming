#ifndef _VARIADIC_HEADER_
#define _VARIADIC_HEADER_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);

/**
 * struct print - struct
 * @str: is the specifier to be printted
 * @f: is a function
 */

typedef struct print
{
	char *str;
	void (*f)(va_list);
} print;

#endif /*VARIADIC HEADER*/
