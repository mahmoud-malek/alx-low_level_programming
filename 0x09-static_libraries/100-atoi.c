#include <stdio.h>
#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: string to be converted
* Return: integer
*/

int _atoi(char *s)
{
	unsigned int ans = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		else if (s[i] >= 48 && s[i] <= 57)
			break;
	}

	for (; s[i] != '\0' && (s[i] >= 48 && s[i] <= 57) ; i++)
	{
		ans *= 10;
		ans += (s[i] - '0');
	}

	return (ans * sign);
}

