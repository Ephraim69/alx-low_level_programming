#include "main.h"
#include <limits.h>

/**
* print_last_digit - prints the last digit of a number
* @num: number to get the last digit of
* Return: returns an integer
*/
int print_last_digit(int num)
{
	int lastDigit;

	if (num == INT_MIN)
		num += 1000;
	if (num < 0)
		num *= -1;
	lastDigit = num % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
