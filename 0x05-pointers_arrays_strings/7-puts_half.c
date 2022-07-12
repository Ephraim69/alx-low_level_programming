#include <stdio.h>
#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line
* @str: the string to be printed
* Return: returns nothing
*/
void puts_half(char *str)
{
	int i;
	int c = 0;

	for (i = 0; 1 ; i++)
	{
		if (str[i] == 0)
			break;
		c++;
	}
	if (c % 2 == 0)
	{
		for (i = c / 2; i < c; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	else if (c % 2 != 0)
	{
		for (i = (c + 1) / 2; i < c; i++)
			printf("%c", str[i]);
		printf("\n");
	}
}
