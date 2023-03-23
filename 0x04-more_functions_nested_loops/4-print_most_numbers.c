#include "main.h"
/**
  * print_most_numbers - prints the numbers 0 - 9
  *
  * Return: 0
  */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		if (i == 50)
		{
			i++;
			continue;
		}
		if (i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

