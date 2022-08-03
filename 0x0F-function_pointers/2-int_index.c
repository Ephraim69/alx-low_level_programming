#include "function_pointers.h"

/**
* int_index - a function that searches for an integer in an array
* @array: the array to be operated on
* @size: thje size of the array
* @cmp: a pointer to the function used to conpare values
* Return: returns the index of the first element for which cmp is successful,
* and -1 if no element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}

	return (-1);
}
