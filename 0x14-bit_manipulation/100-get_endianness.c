#include "main.h"

/**
 * get_endianness - function that check hecks the endianness.
 *
 * Return: big-endian - 0.
 *         little-endian - 1.
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;
	
	return (*c);
}
