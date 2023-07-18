#include<unistd.h>

/**
* _putchar - writes the character c to stdout
*  * @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
