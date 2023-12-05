#include "main.h"

/**
 * errors - error messages to stderr
 * @fd: file descriptor
 * @arg: string to main
 * @err: exit code
 * Return: 0
 */
int errors(int fd, char *arg, int err)
{
	if (err == 97)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (err == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", arg);
		exit(98);
	}
	if (err == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", arg);
		exit(99);
	}
	if (err == 100)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments to main
 * @av: strings to main
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res, written, fd, fd2;
	char buff[1024];

	if (ac != 3)
		errors(0, NULL, 97);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		errors(0, av[1], 98);
	res = read(fd, buff, 1024);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		errors(0, av[2], 99);
	while (res != 0)
	{
		if (res == -1)
			errors(0, av[1], 98);
		written = write(fd2, buff, res);
		if (written == -1)
			errors(0, av[2], 99);
		res = read(fd, buff, 1024);
	}
	if (close(fd) == -1)
		errors(fd, NULL, 100);
	else
		close(fd);
	if (close(fd2) == -1)
		errors(fd2, NULL, 100);
	else
		close(fd2);
	return (0);
}
