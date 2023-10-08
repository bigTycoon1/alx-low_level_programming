#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node;
	hash_node_t *new_node2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while ((new_node2 = new_node) != NULL)
		{
			new_node = new_node->next;
			free(new_node2->key);
			free(new_node2->value);
			free(new_node2);
		}
	}
	free(ht->array);
	free(ht);
}
