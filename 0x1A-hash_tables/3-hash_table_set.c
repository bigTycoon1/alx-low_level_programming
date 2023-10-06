
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
