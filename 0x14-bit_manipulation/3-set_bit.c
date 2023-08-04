#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to set to the bit.
 * @index: the index to start at 0 of the bit.
 *
 * Return: If an error occurs -1.
 *         else 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1UL << index);

	return (1);
}
