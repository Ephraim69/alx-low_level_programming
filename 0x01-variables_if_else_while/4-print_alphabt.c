#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - prints all leters of the alphabet except 'e' amd 'q'
* Return: retuens nothing
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
