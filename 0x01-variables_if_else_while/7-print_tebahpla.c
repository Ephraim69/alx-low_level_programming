#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
* main - the main function
* Return: returns 0
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
