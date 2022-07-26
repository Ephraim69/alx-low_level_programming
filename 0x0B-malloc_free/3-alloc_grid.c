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
	int len = 0;
	int *ptr;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	arr = (int **) malloc(len);
	if (arr == NULL)
		return (NULL);

	ptr = (int *)(arr + height);

	for (i = 0; i < height; i++)
	{
		arr[i] = (ptr + width * i);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}


	return (arr);
}
