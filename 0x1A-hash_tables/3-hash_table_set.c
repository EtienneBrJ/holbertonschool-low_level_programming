#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table struct
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int index, i;

	if (!ht || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);

	if (new->key)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
