#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a function that concatenates two strings.
 * @a: array
 * @n: length of the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;


	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
	}
}
