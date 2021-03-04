#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: nb of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
