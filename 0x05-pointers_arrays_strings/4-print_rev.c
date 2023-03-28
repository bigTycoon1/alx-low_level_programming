#include "main.h"
/**
  *print_rev - function that prints a string
  *@s: string to be print in reverse
  *
  *Return: string
  */
void print_rev(char *s)
{
	int i;
	int j  = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (j = 0; j >= i; j--)
		_putchar(s[j]);
	_putchar('\n');
}
