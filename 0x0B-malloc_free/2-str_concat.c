#include "main.h"
#include <stdlib.h>

/**
* str_concat  - a function that concantenates two strings
* @s1: the destination string
* @s2: the string to be added to s1
* Return: returns a pointer to a newly allocated
* space in memory which contains the contents of s1, followed
* by the contents of s2
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int c = 0;
	int c1 = 0;
	int c2 = 0;
	char *newStr;

	for (i = 0; s1[i] != '\0'; i++)
	{
		c1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		c2++;
	}
	c = c1 + c2 + 1;
	newStr = (char *) malloc(c * sizeof(char));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < c1; i++)
	{
		newStr[i] = s1[i];
	}
	for ( ; i < c; i++)
	{
		newStr[i] = s2[j];
		j++;
	}
	newStr[c - 1] = '\0';
	return (newStr);
}
