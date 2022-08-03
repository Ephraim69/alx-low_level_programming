#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - a function that prints a name
* @name: the name to be printed
* @(*f)(char *): a pointer to a funtion that accepts a string as 
* parameter and returns nothing
* Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
