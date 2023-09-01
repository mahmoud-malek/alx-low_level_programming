#include "main.h"

/**
 * get_bit2 - a function that returns
 * the value of a bit at a given index.
 * @n: the number
 * @index: where we should get the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit2(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

/**
 * get_bit - a function that returns
 * the value of a bit at a given index.
 * @n: the number
 * @index: where we should get the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return (n >> index & 1);
}
