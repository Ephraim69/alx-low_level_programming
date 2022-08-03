#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* get_op_func - a function that selects the right function to perform
* the required operation
* @s: the operator passed in form of string
* Return: returns a pointer to the right function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5 && s != NULL)
	{
		if (s[0] == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
