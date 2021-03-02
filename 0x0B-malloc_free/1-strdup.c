#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL, on success returns a pointer to the duplicated
 * string, NULL if insufficient memory was available
 **/

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < i)
	{
		p[j] = str[j];
		j++;

	}
	p[j] = '\0';
	return (p);
}
