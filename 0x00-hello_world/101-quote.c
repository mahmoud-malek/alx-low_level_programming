#include<stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,";

	write(STDERR_FILENO, msg, sizeof(msg) - 1);
	return (1);
}
