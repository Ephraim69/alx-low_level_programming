#include <stdio.h>
#include "main.h"

/**
* print_array - a function that prints n elements
* of an array of integers, followed by a new line
* @a: the array to be printed
* @n: the number of elements to print from the array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else if (i == (n - 1))
			printf("%d\n", a[i]);
	}
}
