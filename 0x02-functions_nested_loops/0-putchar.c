#include <stdio.h>

/**
* main - prints the string "putchar"
* Return: returns 0
*/
int main(void)
{
	int i;
	char put[] = "_putchar";
	char *ptr;

	for (i = 0; i < 8; i++)
	{
		ptr = &put[i];
		putchar(*ptr);
	}
	putchar ('\n');

	return (0);


}
