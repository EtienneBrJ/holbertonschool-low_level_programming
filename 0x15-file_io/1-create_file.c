#include "holberton.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, fdw;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;
	fdw = write(fd, text_content, i);
	if (fdw == -1)
		return (-1);

	close(fd);
	return (1);
}
