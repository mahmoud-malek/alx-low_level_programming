#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: string to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	size_t len = 0;
	ssize_t write_cnt = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
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
