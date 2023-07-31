#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * print_diagsums -   a function that prints the chessboard.
 * @a: is the board to print
 * @size: is a size
 * Return: pointer to the byte in s that matches
 */

void print_diagsums(int *a, int size)
{
	unsigned long int i, j = size - 1;

	unsigned long int sum1 = 0;
	unsigned long int sum2 = 0;

	for (i = 0; i < (size * size) ; i += size + 1, j += size - 1)
	{
		sum1 += a[i];
		sum2 += a[j];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
