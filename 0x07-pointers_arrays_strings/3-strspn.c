#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string to compare
 * @accept: bytes to compare
 * Return: number of bytes in the initial s, wich consist only of bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, for_ret;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for_ret = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				for_ret = 1;
			}
		}
		if (for_ret == 0)
		{
			return (n);
		}
	}
	return (0);
}
