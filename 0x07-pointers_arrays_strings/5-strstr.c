#include "holberton.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: where is the first occurence
 * Return: a pointer to the beggining of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	int i = 0;

	if (needle == '\0')
	{
		return (&haystack[i]);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j]; j++)
		{
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
