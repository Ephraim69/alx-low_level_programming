#include "main.h"

/**
* print_diagonal - prints a diagonal line in terminal
* @n: number of times '\' should be printed
* Return: returns nothing
*/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
