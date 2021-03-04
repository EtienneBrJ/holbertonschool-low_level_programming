#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string
 * @s2: string to copy
 * @n: n bytes for the mem. alloc of s2
 *
 * Return: pointer
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	char *s;
	int j = 0;

	while (s1 && s1[lens1] != '\0')
		lens1++;
	while (s2 && s2[lens2] != '\0')
		lens2++;
	if (n >= lens2)
		s = malloc(lens1 + lens2 + 1);
	else
		s = malloc(lens1 + n + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < lens1; i++)
		s[i] = s1[i];
	if (n >= lens2)
	{
		while (i < (lens1 + lens2))
		{
			s[i] = s2[j];
			i++;
			j++;
		}
		s[i] = '\0';
	}
	else
	{
		while (i < (lens1 + n))
		{
			s[i] = s2[j];
			i++;
			j++;
		}
		s[i] = '\0';
	}
	return (s);
}
