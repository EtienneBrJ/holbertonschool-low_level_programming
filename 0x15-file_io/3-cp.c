#include "holberton.h"
/**
 * f_exit - Specific exit code depending of the given error case.
 * @error: Error code
 * @argv: arguments passed
 * @fd: file descriptor
 */
void f_exit(int error, char *argv[], int fd)
{
	switch (error)
	{
	case 97:
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	}
	case 98:
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		break;
	}
	case 99:
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		break;
	}
	case 100:
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		break;
	}
	}

	exit(error);
}

/**
 * main - copies the content of a file to another file
 * @ac: nb of arguments
 * @argv: double pointer of arguments
 * Return: int
 */
int main(int ac, char *argv[])
{
	char buf[1024];
	int fd, fdw, r, w, c;

	if (ac != 3)
		f_exit(97, argv, 0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		f_exit(98, argv, 0);
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fdw == -1)
		f_exit(99, argv, 0);
	r = read(fd, buf, 1024);
	if (r == -1)
		f_exit(98, argv, 0);
	while ((r = read(fd, buf, 1024)) > 0)
	{
		w = write(fdw, buf, r);
		if (w == -1)
			f_exit(99, argv, 0);
		r = read(fd, buf, 1024);
		if (r == -1)
			f_exit(98, argv, 0);
	}
	c = close(fd);
	if (c == -1)
		f_exit(100, argv, fd);
	c = close(fdw);
	if (c == -1)
		f_exit(100, argv, fdw);
	return (0);
}
