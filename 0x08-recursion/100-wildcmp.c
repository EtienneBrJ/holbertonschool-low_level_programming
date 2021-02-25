#include "holberton.h"

/**
 * wildcmp - compares two string and returns 1 if the strings can be considered
 * identical, otherwise return 0
 * @s1: string to compare with s2
 * @s2: string to compare with s1
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
		return (0);
}
