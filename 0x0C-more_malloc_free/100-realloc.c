#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes if the allocated space for ptr
 * @new_size: new size in bytes of the memory block
 *
 * Return: pointer to the new block
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p_new;
	unsigned int i;
	char *ptr1;

	ptr1 = ptr;

	if (!ptr1)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	p_new = malloc(new_size);
	if (!p_new)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p_new[i] = ptr1[i];
	}
	free(ptr);
	return (p_new);
}
