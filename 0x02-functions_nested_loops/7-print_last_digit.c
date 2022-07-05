#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @num: number to get the last digit of
* Return: returns an integer
*/
int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
		num *= -1;
	lastDigit = num % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
