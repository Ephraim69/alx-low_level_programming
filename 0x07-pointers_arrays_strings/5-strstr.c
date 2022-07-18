#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be tested
 * @needle: the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;
	int n = 0;

	for (i = 0; needle[i] != 0; i++)
		n++;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = i;
		l = 0;
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[k] == needle[j])
			{
				k++;
				l++;
			}
			if (l == n && needle[j] != 0)
				return ((haystack + i));
		}
	}
	return (NULL);
}
