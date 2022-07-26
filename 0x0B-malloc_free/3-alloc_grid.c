#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function that allocates memory for
* a 2 dimensional array of integers
* @width: the number of columns of the array
* @height: the number of rows of the array
* Return: returns a pointer to the 2-dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for  (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	
	return (grid);
}
