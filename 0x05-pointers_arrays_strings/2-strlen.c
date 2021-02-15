#include "holberton.h"
/**
 * _strlen - return the length of a string
 * @s: Char
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
