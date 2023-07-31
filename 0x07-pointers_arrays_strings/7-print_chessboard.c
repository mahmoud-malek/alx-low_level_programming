#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a: is the board to print
 * Return: pointer to the byte in s that matches
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}

		printf("\n");
	}
}
