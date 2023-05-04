#include "main.h"
#include <stdlib.h>
/**
  * print_binary - function that prints the binary representation of a number
  * @n: binary number to be printed
  *
  * Return: 0
  */
void print_binary(unsigned long int n)
{
	int x, tmp = 0;
	unsigned long int count;

	for (x = 32; x >= 0; x--)
	{
		count = n >> x;

		if (count & 1)
		{
			_putchar('1');
			tmp++;
		}
		else if (tmp)
			_putchar('0');
	}
	if (!tmp)
		_putchar('0');
}
