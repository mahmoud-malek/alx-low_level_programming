#include<stdio.h>


/**
 * main - Entry point
 *
 * Return: 1 (error)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,";

	write(1, msg, sizeof(msg) - 1);
	return (1);
}
