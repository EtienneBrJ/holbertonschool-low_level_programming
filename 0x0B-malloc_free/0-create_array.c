#include "holberton.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: char to fill
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * 98);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
