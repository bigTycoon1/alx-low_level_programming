#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: imput array
 *@n: lenght of array
 **Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
