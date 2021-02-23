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
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
