#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - function that prints a name
  * @name: name of the string to add
  * @f: pointer to  function
  *
  * Return: zero
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
