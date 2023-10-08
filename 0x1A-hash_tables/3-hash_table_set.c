#include "hash_tables.h"

/**
 * add_n_hash - function to add a node at the beginning of a hash
 * @head: head of the hash
 * @key: key to the hash
 * @value: value to the hash store
 *
 * Return: head of the hash
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = *head;

	while (new_node != NULL)
	{
		if (strcmp(key, new_node->key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (*head);
		}
		new_node = new_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table to add/update.
 * @key: key of the hash.
 * @value: value associate with keys.
 *
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
