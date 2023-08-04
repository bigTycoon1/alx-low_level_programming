#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the value of the bit.
 * @index: the index - starting from 0 of the bit.
 *
 * Return: If an error occurs -1.
 *         Otherwise - the value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	 val = (n >> index) & 1;

    return val;
}
