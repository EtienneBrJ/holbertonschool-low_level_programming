#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of the array
 *
 * Return: Returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned int i = 0;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);

	hashtable->size = size;

	hashtable->array = malloc(sizeof(hash_node_t) * size);
	if (!hashtable->array)
		return (NULL);

	while (i < size)
	{
		hashtable->array[i] = NULL;
		i++;
	}

	return (hashtable);
}
