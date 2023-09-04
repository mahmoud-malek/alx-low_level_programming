#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_and_exit - function to handle errors
 * @str: message to print
 * @filename: if of the file if exist
 * @exit_code: the code the exit with
 */

void error_and_exit(char *str, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", str, filename);
	exit(exit_code);
}

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
	int file_from, file_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_and_exit("Usage: cp file_from file_to", "", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		error_and_exit("Error: Can't read from file", argv[1], 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
	{
		close(file_from);
		error_and_exit("Error: Can't write to", argv[2], 99);
	}

	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			close(file_from);
			close(file_to);
			error_and_exit("Error: Can't write to", argv[2], 99);
		}
	}

	if (read_bytes < 0)
		error_and_exit("Error: Can't read from file", argv[1], 98);

	if (close(file_from) < 0)
		error_and_exit("Error: Can't close fd", argv[1], 100);

	if (close(file_to) < 0)
		error_and_exit("Error: Can't close fd", argv[2], 100);

	return (0);
}
