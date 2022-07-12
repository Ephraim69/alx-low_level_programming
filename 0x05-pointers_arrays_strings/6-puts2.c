#include <stdio.h>
#include "main.h"

/**
* puts2 - a function that prints every other character of
* a string, followed by a new line, to stdout
* @str: the string of characters to be printed
* Return: returns nothing
*/
void puts2(char *str)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (*(str + i) == 0)
		{
			printf("\n");
			break;
		}
		if (i % 2 == 0)
			printf("%c", *(str + i));
	}
}
