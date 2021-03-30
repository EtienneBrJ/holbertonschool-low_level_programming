#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 if it fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, fdw;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i])
		i++;

	fdw = write(fd, text_content, i);
	if (fdw == -1)
		return (-1);

	close(fd);
	return (1);
}
