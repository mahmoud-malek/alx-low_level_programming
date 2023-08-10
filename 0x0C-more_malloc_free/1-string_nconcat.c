#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first parameter
 * @s2: second parameter
 * @n: number of bytes to take from s2
 * Return: resulting pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;
	char *res;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	len2 = (len2 > n ? n : len2);
	res = malloc(len1 + len2 + 1);


	if (res == NULL)
		return (NULL);

	for (i = 0 ; i < len1; i++)
		res[i] = s1[i];

	for (j = 0; j < len2; j++)
		res[j + i] = s2[j];

	res[j + i] = '\0';

	return (res);
}
