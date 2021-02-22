#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locate a char in a string
 * @s: string to check
 * @c: char to locate
 * Return: first occurence of the char c in the string s,
 * or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++) /* >= ?? */
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
