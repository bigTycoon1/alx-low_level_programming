#include "main.h"
#include <stdlib.h>
/**
  * flip_bits - function that returns the number of bits
  * @n: first number to count
  * @m: second number to count
  *
  * Return: returns the number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, result = 0;
	unsigned long int count;
	unsigned long int tmp = n ^ m;

	for (x = 32; x >= 0; x--)
	{
		count = tmp >> x;
		if (count & 1)
			result++;
	}
	return (result);
}
