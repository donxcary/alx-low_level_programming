#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, (S_IRUSR | S_IWUSR));
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
	if (written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
