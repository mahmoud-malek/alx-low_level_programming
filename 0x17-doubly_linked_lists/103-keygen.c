#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_biggest_char - finds the biggest ASCII value from the username
 *
 * @username: username
 * @len: length of username
 * Return: the biggest ASCII value
 */
int find_biggest_char(char *username, int len)
{
	int current_char;
	int max_char;
	unsigned int random_number;

	current_char = *username;
	max_char = 0;

	while (max_char < len)
	{
		if (current_char < username[max_char])
			current_char = username[max_char];
		max_char += 1;
	}

	srand(current_char ^ 14);
	random_number = rand();

	return (random_number & 63);
}

/**
 * multiply_chars - multiplies each char of username
 *
 * @username: username
 * @len: length of username
 * Return: multiplied char
 */
int multiply_chars(char *username, int len)
{
	int current_char;
	int index;

	current_char = index = 0;

	while (index < len)
	{
		current_char = current_char + username[index] * username[index];
		index += 1;
	}

	return (((unsigned int)current_char ^ 239) & 63);
}

/**
 * generate_random_char - generates a random char
 *
 * @username: username
 * Return: a random char
 */
int generate_random_char(char *username)
{
	int current_char;
	int index;

	current_char = index = 0;

	while (index < *username)
	{
		current_char = rand();
		index += 1;
	}

	return (((unsigned int)current_char ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, current_char, index;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850};
	(void)argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	current_char = index = 0;
	while (index < len)
	{
		current_char = current_char + argv[1][index];
		index = index + 1;
	}
	keygen[1] = ((char *)alph)[(current_char ^ 79) & 63];
	/* ----------- f3 ----------- */
	current_char = 1;
	index = 0;
	while (index < len)
	{
		current_char = argv[1][index] * current_char;
		index = index + 1;
	}
	keygen[2] = ((char *)alph)[(current_char ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[find_biggest_char(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[multiply_chars(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
	keygen[6] = '\0';
	for (current_char = 0; keygen[current_char]; current_char++)
		printf("%c", keygen[current_char]);
	return (0);
}
