#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: string that will receive the copy
 * @src: string to be copied
 * @n: bytes of string src
 * Return: @dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
