#include <stdio.h>
#include "main.h"

/**
* string_toupper -  a function that changes all
* lowercase letters of a string to uppercase
* @s: a pointer to the string that witll be converted to upper case
* Return: returns a pointer
*/
char *string_toupper(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != 0; i++)
		c++;
	for (i = 0; i < c; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
