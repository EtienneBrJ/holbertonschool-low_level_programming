#include "holberton.h"
/**
 * _memcpy - copes memory area
 * @dest: copie destination
 * @src: memory area to copie
 * @n: bytes
 * Return: dest copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
