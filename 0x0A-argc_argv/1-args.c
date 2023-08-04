#include <stdio.h>

/**
 * main-Entry point
 * @argc: is number of command line arguments
 * @argv: is the array of arguments
 * Return: 0 (Success)
*/

int main(int argc, __attribute__ ((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
