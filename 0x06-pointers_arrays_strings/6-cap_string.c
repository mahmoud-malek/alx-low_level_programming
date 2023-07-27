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

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		while (str[i] != '\0')
		{
			if(str[i] == '\t' || str[i] == '\n' || str[i] == '.' || str[i] == ',' || str[i] == ' ')
				break;

				i++;
		}

		 if (str[i] == '\t')
			str[i] = ' ';
	}

	return (str);	
}
