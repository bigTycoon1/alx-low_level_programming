#include "hash_tables.h"

/**
 * hash_table_print - function to prints the keys and value
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node;
	char *current;

	if (ht == NULL)
		return;

	printf("{");
	current = "";

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			printf("%s'%s': '%s'", current, new_node->key, new_node->value);
			current = ", ";
			new_node = new_node->next;
		}
	}
	printf("}\n");
}
