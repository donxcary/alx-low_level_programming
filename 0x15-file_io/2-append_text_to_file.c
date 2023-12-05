#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	written = write(fd, text_content, length);
	if (written == -1 || written < length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
