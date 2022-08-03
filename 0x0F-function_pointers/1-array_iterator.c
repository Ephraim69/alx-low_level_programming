#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator -  a function that executes a function
*  given as a parameter on each element of an array
* @array: the array to be operated on
* @size: the size of the array
* @action: the acion to be performed on each array element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
