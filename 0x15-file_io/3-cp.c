#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @ac: nb of arguments
 * @av: double pointer of arguments
 * Return: int
 */
int main(int ac, int **av)
{
	char buf[1024];
	int fd, fdw, fdr;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fdw == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fdr = write(
}
