#include "main.h"

/**
 * create_file - Creates a file with specific permissions and writes text to it
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
