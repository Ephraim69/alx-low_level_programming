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
	int j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
		for (j = 'a'; j < 'g'; j++)
			putchar(j);
	putchar('\n');
}
