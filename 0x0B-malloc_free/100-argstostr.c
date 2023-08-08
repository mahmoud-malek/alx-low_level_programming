#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: Resulting array
*/

char *str_concat(char *s1, char *s2)
{
	unsigned long int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned long int len2 = (s2 != NULL) ? strlen(s2) : 0;
	unsigned long int i, j;
	char *res;

	res = malloc(len1 + len2 + 2);

	if (res == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];

	res[len1 + len2] = '\n';
	res[len1 + len2 + 1] = '\0';

	return (res);

}


/**
 * argstostr - unction that frees a 2 dimensional grid previously
 * @av: array of strings
 * @ac: length
 * Return: Resulting array
*/

char *argstostr(int ac, char **av)
{
	char *res = NULL, *tmp = NULL;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		tmp = str_concat(res, av[i]);

		if (tmp == NULL)
		{
			free(res);
			return (NULL);
		}

		free(res);
		res = tmp;
	}

	return (res);
}

