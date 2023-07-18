#include "main.h"

/**
* main - Entry point
*
* Description: print "_putchar"
*
* Return: Always 0 (success)
*/

int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
