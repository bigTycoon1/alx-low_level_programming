#include "main.h"
/**
  *more_numbers - prints 10 times the numbers, from 0 to 14
  *
  *Return: always 0
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n')
	return (0);
}
