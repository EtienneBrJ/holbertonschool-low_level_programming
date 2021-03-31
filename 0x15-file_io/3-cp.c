#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @ac: nb of arguments
 * @av: double pointer of arguments
 * Return: int
 */
int main(int ac, char **av)
{
	char buf[1024];
	int fd, fdw, r, w, c;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	r = read(fd, buf, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	while (r > 0)
	{
		w = write(fdw, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		r = read(fd, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
			exit(98);
		}
	}
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdw);
		exit(100);
	}
	return (0);
	c = close(fdw);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdw);
		exit(100);
	}
	return (0);
}
