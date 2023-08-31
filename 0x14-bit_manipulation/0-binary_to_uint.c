#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: is a string of 0s and 1s
 * Return: the converted number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, i = 0;
	unsigned int res = 0, powers = 0;

	if (!b)
		return (0);

	length = strlen(b);

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			res += (1 << powers);

		powers++;
	}

	return (res);
}
