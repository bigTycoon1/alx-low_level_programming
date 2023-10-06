#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number (hash number)
 * for a str.
 * @str: string of the hash num
 *
 * Return: hash num
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
