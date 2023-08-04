#include <stdio.h>

/**
 * main-Entry point
 * @argc: is number of command line arguments
 * @argv: is the array of arguments
 * Return: 0 (Success)
*/

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
