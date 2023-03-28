#include "main.h"
/**
  *print_rev - function that prints a string
  *@s: string to be print in reverse
  *
  *Return: string
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
