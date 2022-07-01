#include <stdio.h>

/**
 * main - a program to print all possible combination of two digits
 *
 * Return: returns 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
