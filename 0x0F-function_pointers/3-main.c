#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - calclator
 * Description: this program calculate different operators
 * @argc: number of args
 * @argv: arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((!strcmp(argv[2], "%") || !strcmp(argv[2], "/")) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}


	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n",  get_op_func(argv[2])(num1, num2));

	return (0);
}
