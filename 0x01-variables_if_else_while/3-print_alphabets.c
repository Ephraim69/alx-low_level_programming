#include<stdio.h>

/**
* main - two nested loops than print the entire alphabet in just lower and upper case
* Return: returns 0
*/
void main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
		for (j = 'A'; j <= 'Z'; j++)
			putchar(j);
	putchar('\n');
}