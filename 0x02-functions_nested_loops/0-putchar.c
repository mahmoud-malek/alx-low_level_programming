#include "main.h"

/**
* main: entry point
*
* Description: print "_putchar"
*
* Return: 0 when success
*/

int main(void)
{
	char a [8] = {"_putchar"};

	for (int i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
