#include <stdio.h>

/**
* main - find and print largest prime factor
* Description: largest prime factor
* Return: always 0 (succss)
*/

int main(void)
{
	long int n = 612852475143;
	long int largest_factor = 1;
	long int i;


	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			int is_prime = 1;
			long int j;

			for (j = 2; j <= (i / 2); j++)
			{
				if (i % j == 0)
				{
					is_prime = 0;
					break;
				}
			}
			if (is_prime)
			{
				largest_factor = i;
			}
		}
	}
	printf("%ld\n", largest_factor);

	return (0);
}
