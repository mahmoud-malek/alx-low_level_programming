#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - unction that frees a 2 dimensional grid previously
 * @av: array of strings
 * @ac: length
 * Return: Resulting array
*/

char *argstostr(int ac, char **av)
{
	char *res;
	long int i, length = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	res = malloc(length + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(res + len, av[i]);
		len += strlen(av[i]);
		res[len++] = '\n';
	}

	res[length] = '\0';
	return (res);
}

