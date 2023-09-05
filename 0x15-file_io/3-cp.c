#include "main.h"

/**
 * main - Entry point
 * Description: program that copies the content
 * of a file to another file.
 * @argc: number of args
 * @argv: array of strings (args)
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int src, dest;
	char buff[BUFF_SIZE];
	ssize_t wirte_cnt = 0, read_cnt = 0;

	if (argc != 3)
		errors("Usage: cp file_from file_to", "", 97);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
		errors("Error: Can't write to ", argv[2], 99);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		errors("Error: Can't read from file ", argv[1], 98);

	do {
		read_cnt = read(src, buff, BUFF_SIZE);

		if (read_cnt == -1)
			errors("Error: Can't read from file ", argv[1], 98);

		wirte_cnt = write(dest, buff, read_cnt);
		if (wirte_cnt == -1)
			errors("Error: Can't write to ", argv[2], 99);

	} while (read_cnt);

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	return (0);
}

/**
 * errors - function that print errors
 * @message: number of args
 * @file_name: name of file or code
 * @exit_code: code to exit the program with
 */

void errors(char *message, char *file_name, int exit_code)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file_name);
	exit(exit_code);
}
