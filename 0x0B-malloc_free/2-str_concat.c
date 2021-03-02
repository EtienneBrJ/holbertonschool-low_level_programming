#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string
 * @s2: string
 * Return: pointer
 **/
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int lens1, lens2, i, j;

	lens1 = 0;
	while (s1[lens1] != '\0')
	{
		lens1++;
	}

	lens2 = 0;
	while (s2[lens2] != '\0')
	{
		lens2++;
	}

	p = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < lens1; i++)
		{
			p[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		j = 0;
		while (i < lens1 + lens2)
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';
	return (p);
}
