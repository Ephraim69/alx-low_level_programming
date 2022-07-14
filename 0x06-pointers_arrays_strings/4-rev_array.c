#include <stdio.h>
#include "main.h"

/**
* reverse_array -  a function that reverses the content of an array of integers
* @a: a pointer to the array of integers that will be reversed
* @n: the number of elements in the array
* Return: returns nothing
*/
void reverse_array(int *a, int n)
{
	int i, tmp;
	int ln = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[ln];
		a[ln] = tmp;
		ln--;
	}
}
