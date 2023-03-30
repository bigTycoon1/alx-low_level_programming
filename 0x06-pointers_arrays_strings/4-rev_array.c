#include "main.h"
/**
  *reverse_array - function that reverses the content of an array of integers
  *@a: pointer to array
  *@n: number of element of an array
  *
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	j = 0;

	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}
}




