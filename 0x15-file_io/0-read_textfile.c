#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: is the name of the file
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * or 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char buff[BUFSIZ];
	ssize_t printed = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	printed = read(fd, buff, letters);
	if (printed == -1 || (size_t)printed != letters)
		return (0);

	write(STDOUT_FILENO, buff, letters);
	return (printed);
}
