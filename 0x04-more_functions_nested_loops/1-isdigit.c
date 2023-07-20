#include <stdio.h>

/**
* _isdigit - function check if char is a digit
* @c: corresponding number of the char in ascii table
* Return: 1 if digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
