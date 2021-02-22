#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: where is the first occurence
 * Return: a pointer to the beggining of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	char *p = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			break;
		}
	}
	if (p == 0)
	{
		return (0);
	}
	else
		return (p);
}
