#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - function that frees a 2 dimensional grid
  * @height: height of the dimensional grid
  * @grid: the 2 dimensional grid created
  *
  * Return: zero
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
