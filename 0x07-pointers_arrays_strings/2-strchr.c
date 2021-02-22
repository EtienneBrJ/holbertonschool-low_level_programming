#include "holberton.h"
/**
 * _strchr - locate a char in a string
 * @s: string to check
 * @c: char to locate
 * Return: first occurence of the char c in the string s,
 * or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	char *s2 = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s2 = &s[i];
		}
	}
	if (s2 == 0)
	{
		return (0);
	}
	else
	{
		return (s2 - 1);
	}
}
