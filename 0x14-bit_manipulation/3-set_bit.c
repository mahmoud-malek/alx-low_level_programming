#include "main.h"

/**
 * set_bit2 - a function that sets the value
 * of a bit to 1 at a given index.
 * @n: the number
 * @index: where we should get the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit2(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}

/**
 * set_bit - a function that sets the value
 * of a bit to 1 at a given index.
 * @n: the number
 * @index: where we should get the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
