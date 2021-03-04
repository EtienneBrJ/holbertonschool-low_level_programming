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

	if (!ptr)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (p_new);
}
