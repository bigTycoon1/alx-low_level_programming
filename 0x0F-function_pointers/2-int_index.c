#include "function_pointers.h"
#include <stdio.h>
/**
  * int_index - function that searches for an integer
  * @array: array to contain number
  * @size: the number of elements in the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: zero
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
