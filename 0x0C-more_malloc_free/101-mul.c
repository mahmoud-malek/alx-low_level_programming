#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * digit - checks if a non-digit char
 * @c: char to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int digit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * valid - checks whether str has non digit
 * @str: string to check
 * Return: 1 if success, and 0 otherwise
 */
int valid(char *str)
{
	 int i;

	if (str == NULL)
		return (0);
	for (i = 0; i < _strlen(str); i++)
		if (!digit(str[i]))
			return (0);

	return (1);
}

/**
 * myexit - print Error and eixt with 98
 *
 */
void myexit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char **argv)
{
	char *n1, *n2, *res;
	int len1, len2, len, i, j, num;

	n1 = argv[1], n2 = argv[2];
	if (argc != 3 || !valid(n1) || !valid(n2))
		myexit();

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(char) * len);

	if (res == NULL)
		myexit();

	for (i = 0; i <= len1 + len2; i++)
		res[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		num = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			num += (res[i + j + 1] - '0') + ((n1[i] - '0') * (n2[j] - '0'));
			res[i + j + 1] = num % 10 + '0';
			num /= 10;
		}
		if (num)
			res[i + j + 1] = num + '0';
	}
	i = 0;
	while (res[i++] == '0')
	for (; i < len - 1; i++)
		putchar(res[i]);

	putchar('\n');
	free(res);
	return (0);
}
