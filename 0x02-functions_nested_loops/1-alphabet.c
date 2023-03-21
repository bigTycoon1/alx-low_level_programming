#include "main.h"
/**
 *print_alphabet - function that prints the alphabet, in lowercase"
 *Return: always 0 (success)
  */
void print_alphabet(void)
{
	char x;

	for (x = 97; x <= 122; x++)
		_putchar(x);
	_putchar('\n');
}
