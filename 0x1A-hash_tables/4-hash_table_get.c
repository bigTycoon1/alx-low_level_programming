#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key.
 * @ht: ptr to the hash table
 * @key: key of the hash
 *
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	new_node = ht->array[index];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}

	return (NULL);
}
