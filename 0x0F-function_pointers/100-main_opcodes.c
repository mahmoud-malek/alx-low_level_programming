#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point to program
 * Descripion: a program that prints the opcodes of its own main function
 * @argc: number of args
 * @argv: args
 * Return: 0 success
*/

int main(int argc, char **argv)
{
	int num, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *ref = (unsigned char *)main;

	for (i = 0; i < strlen(argv[1]); i++)
	{
		printf("%02x ", ref[i]);
	}
	printf("\n");

	return (0);
}
