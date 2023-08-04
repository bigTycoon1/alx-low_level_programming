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
	unsigned int xor_tap = n ^ m;
	int rep = 0;

    while (xor_tap != 0)
    {
        rep += xor_tap & 1;
        xor_tap >>= 1;
    }

    return (rep);
}
