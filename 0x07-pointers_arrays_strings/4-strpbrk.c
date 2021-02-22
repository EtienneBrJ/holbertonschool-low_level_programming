#include "holberton.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to find occurence
 * @accept: string where is occurence to find is s
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				r = &s[i];
		}
	}
	if (r == 0)
	{
		return (0);
	}
	else
		return (r);
}
