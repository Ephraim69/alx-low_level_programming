#include "main.h"

/**
* _islower - checks if a character is lower case and returns 1, else 0
* Return: if c islower, return 1, else return 0
*/
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0); 
}
