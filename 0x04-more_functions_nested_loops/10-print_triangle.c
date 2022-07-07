#include "main.h"

/**
* print_triangle - draws a triangle in terminal
* @size: height and width of the triangle
* Return: returns nothing
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < (size - i))
				{
					_putchar(' ');
					continue;
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
