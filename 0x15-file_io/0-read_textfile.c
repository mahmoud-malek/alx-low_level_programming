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
	char *buff = malloc(sizeof(char) * letters + 1);
	ssize_t printed = 0, wrote = 0;

	if (!filename || !buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	printed = read(fd, buff, letters);
	if (printed == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	buff[printed] = '\0';

	wrote = write(STDOUT_FILENO, buff, printed);
	if (wrote == -1 || wrote != printed)
	{
		close(fd);
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (wrote);
}
