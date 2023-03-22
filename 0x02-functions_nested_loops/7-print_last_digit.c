#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @i: function parameter of the last digit
 * Return: k
  */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
	{
		k = k * -k;
	}
		_putchar(k + 48);
	return (k);
}
