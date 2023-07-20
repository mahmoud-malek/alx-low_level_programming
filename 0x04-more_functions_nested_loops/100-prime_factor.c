#include <stdio.h>

/**
* main - find and print largest prime factor
* Description: largest prime factor
* Return: always 0 (succss)
*/

int main(void)
{
	long int n = 612852475143, div = 2, maxf;

	while (n > 0)
	{
		if (n % div != 0)
			div++;

		else
		{
			maxf = n;
			n /= div;

			if (n == 1)
			{
				printf("%ld\n", maxf);
				break;
			}
		}
	}

	return (0);
}
