#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase
* Return: returns nothing
*/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

/**
* main - calls the print_alphabet function
* Return: returns 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
