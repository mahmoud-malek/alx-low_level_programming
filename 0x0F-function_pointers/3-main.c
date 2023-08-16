#include <stdio.h>
#include <stdlib.h>
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
	char mod[2] = "%";
	char div[2] = "/";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2] == mod || argv[2] == div) && num2 == 0)
	{
		printf("Error\n");
		exit(99);
	}


	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n",  get_op_func(argv[2])(num1, num2));

	return (0);
}
