#include "main.h"

/**
 * flip_bits - function to counts the number of bits.
 * @n: the number to be set.
 * @m: the number to be flip with n.
 *
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
