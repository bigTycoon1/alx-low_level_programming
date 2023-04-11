#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid -  function that returns a pointer to a 2 dimensional array
  *@width: dimension array of integer
  *@height: dimension array of height integer
  *
  *Return: pointer to array
  */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
	if (a[i] == NULL)
	{
		for (j = 0; j < i; j++)
			free(a[j]);
	}
	free(a);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		a[i][j] = 0;
	}
	return (a);
}
