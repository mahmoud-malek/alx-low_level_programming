#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words in string
 * @str: objective string
 * Return: pointer to resulting string
*/

char *cap_string(char *str)
{
	int i;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		while (str[i] != '\0')
		{
			int j;
			int ok = 0;

			for (j = 0; j < 13; j++)
			{
				if (sep[j] == str[i])
				{
					ok = 1;
					break;
				}
			}

			if (ok)
				break;

			i++;
		}

		if (str[i] == '\t')
			str[i] = ' ';
	}

	return (str);
}
