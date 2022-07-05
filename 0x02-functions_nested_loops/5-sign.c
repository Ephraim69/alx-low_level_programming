#include "main.h"

/**
* print_sign - prints the negative or positive sign of a number
* @n: the number to be checked
* Return: returns 1 if > 0, 0 if == 0, and -1 if < 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}

