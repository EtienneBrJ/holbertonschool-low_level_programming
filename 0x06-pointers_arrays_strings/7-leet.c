#include "holberton.h"
/**
 * leet - encode a string into 1337
 * @s: string to convert
 * Return: s converted
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] = s[a])
			{
				s[i] = s[b];
			}
		}
	}
	return (s);
}
