#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that return 2 dimensional array
 * @width: first parameter
 * @helight: second parameter
 * Return: the grid o Null if is 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc (height * sizeof(int *));
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	for (k = 0; k < i; k++)
	{
		free(grid[k]);
	}

	free (grid);
	return (grid);
}
