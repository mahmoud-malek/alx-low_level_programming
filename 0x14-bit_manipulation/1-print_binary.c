#include "main.h"

/**
 * print_binary2 -a function that prints the binary
 *  representation of a number.
 * @n: number
 * Return: the converted number, 0 otherwise
 */

void print_binary2(unsigned long int n)
{
	if (n > 1)
		print_binary2(n >> 1);
	putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary -a function that prints the binary
 *  representation of a number.
 * @n: number
 * Return: the converted number, 0 otherwise
 */

void print_binary(unsigned long int n)
{
	int bits_size = sizeof(n) * 8;
	int one = 0;

	while (bits_size)
	{
		bits_size--;
		if (n & (1UL << bits_size))
			putchar('1'), one = 1;

		else if (one)
			putchar('0');
	}

	if (!one)
		putchar('0');
}
