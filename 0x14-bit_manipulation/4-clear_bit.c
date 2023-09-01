#include "main.h"

/**
 * clear_bit2 -  a function that sets the value
 * of a bit to 0 at a given index.
 * @n: the number
 * @index: where we should get the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit2(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}

/**
 * clear_bit -  a function that sets the value
 * of a bit to 0 at a given index.
 * @n: the number
 * @index: where we should get the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
