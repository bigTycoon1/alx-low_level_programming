#include "main.h"
#include <stdlib.h>
/**
  * get_bit - function that returns the value of a bit at a given index
  * @index: index of the bit to get  starting from 0
  * @n: number of the bit
  *
  * Return: the value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int count;

	if (index > 32)
		return (-1);

	count = (n >> index) & 1;

	return (count);
}
