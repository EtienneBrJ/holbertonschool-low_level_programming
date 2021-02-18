#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @s: string to capitalize
 * Return: capitalize string
 */

char *cap_string(char *s)
{
	int i, i_separator;

	char separator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			      '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i_separator = 0; i_separator < 13; i_separator++)
		{
			if (s[i - 1] == separator[i_separator])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
