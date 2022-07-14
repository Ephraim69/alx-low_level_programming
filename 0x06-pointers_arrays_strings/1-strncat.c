#include <stdio.h>
#include "main.h"

/**
* _strncat - a function that cocantenates two strings
* @dest: the pointer to the cocantenated string
* @src: the string to be appended
* @n: the number of bytes from src to be appended
* Return: returns a pointer to the string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0, d = 0, j = 0;

	for (i = 0; dest[i] != 0; i++)
		c++;
	for (i = 0; src[i] != 0; i++)
		d++;
	for (i = c; i < c + n; i++)
	{
		if (i == (c + 98))
			break;
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
