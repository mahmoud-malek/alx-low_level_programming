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
	unsigned long int len1;
	unsigned long int len2;
	unsigned long int i, j;
	char *res;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 =  strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 =  strlen(s2);


	res = malloc(len1 + len2 + 1);

	if (res == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];

	res[strlen(res)] = '\0';

	return (res);

}

