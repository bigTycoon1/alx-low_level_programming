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
	int **aaa;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	aaa = (int **) malloc(sizeof(int *) * height);

	if (aaa == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		aaa[i] = (int *) malloc(sizeof(int) * width);

		if (aaa[i] == NULL)
		{
			for (j = 0; j < i ; j++)
			{
				free(aaa[j]);
			}
			free(aaa);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			aaa[i][j] = 0;
		}
	}
	return (aaa);
}
