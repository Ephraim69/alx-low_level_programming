#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
* main - prints every number from 0 to 9
* Return: returns 0
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
