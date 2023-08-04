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
	int sum = 0, num, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
