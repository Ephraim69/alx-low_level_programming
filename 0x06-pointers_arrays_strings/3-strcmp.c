#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the string to be compared to
* @s2: the string being compared
* Return: returns -15 if s1 < s2, 15 if s1 > s2
* and returns 0 if they're equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int ls1 = 0, ls2 = 0;

	for (i = 0; s1[i] != 0; i++)
		ls1++;
	for (i = 0; s2[i] != 0; i++)
		ls2++;
	if (ls1 < ls2)
		return (-15);
	else if (ls1 > ls2)
		return (15);
	else if (ls1 == ls2)
		return (0);
}
