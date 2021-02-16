#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: pointer to the buffer in which the function copy the string
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
