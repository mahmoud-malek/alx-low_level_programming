#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: is the name of the file
 * @text_content: string to write
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t write_cnt = 0;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write_cnt = write(fd, text_content, len);

		if (write_cnt == -1 || write_cnt != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
