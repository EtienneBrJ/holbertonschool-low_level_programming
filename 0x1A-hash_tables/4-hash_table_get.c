#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: the value associated with the element
 * or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *get;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	get = ht->array[index];
	while (get && strcmp(get->key, key) != 0)
		get = get->next;

	if (get == NULL)
		return (NULL);
	else
		return (get->value);
}
