#include "holberton.h"
#include <stddef.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to find occurence
 * @accept: string where is occurence to find is s
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
