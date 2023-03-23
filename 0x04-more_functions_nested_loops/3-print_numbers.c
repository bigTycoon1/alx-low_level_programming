#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers 0-9
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}

