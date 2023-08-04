#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main-Entry point
 * @argc: is number of command line arguments
 * @argv: is the array of arguments
 * Return: 0 (Success)
*/

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
	}
	return (0);
}
