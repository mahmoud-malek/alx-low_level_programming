#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * valid - checks whether str has non digit
 * @str: string to check
 * Return: 1 if success, and 0 otherwise
 */
int valid(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	for (i = 0; i < strlen(str); i++)
		if (!isdigit(str[i]))
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
 * multiply - multiplies two positive numbers
 * @res: resulting array
 * @n1: num1
 * @n2: num2
 * @len1: length1
 * @len2: length2
 * Return: always 0 (Success)
 */

void multiply(char *res, char *n1, char *n2, int len1, int len2)
{
	int i, j, num;

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
	int len1, len2, len, i;

	n1 = argv[1], n2 = argv[2];
	if (argc != 3 || !valid(n1) || !valid(n2))
		myexit();

	len1 = strlen(n1);
	len2 = strlen(n2);
	len = len1 + len2 + 1;
	if (n1[0] == '0' || n2[0] == '0')
	{
		putchar('0');
		putchar('\n');
	}
	res = malloc(sizeof(char) * len);

	if (res == NULL)
		myexit();

	for (i = 0; i <= len1 + len2; i++)
		res[i] = '0';

	multiply(res, n1, n2, len1, len2);
	i = 0;
	while (res[i] == '0')
		i++;

	for (; i < len - 1; i++)
		putchar(res[i]);

	putchar('\n');
	free(res);
	return (0);
}
