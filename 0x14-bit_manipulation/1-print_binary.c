#include "main.h"

/**
 * print_binary - function to print binary rep of a num.
 * @n: number to be printed in binary
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1Ul) + '0');
}
