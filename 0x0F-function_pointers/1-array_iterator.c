#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - function that executes a function given as a parameter
  *@size: size of the element to print
  *@array: array of element
  *@action: pointer to the function
  *
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
