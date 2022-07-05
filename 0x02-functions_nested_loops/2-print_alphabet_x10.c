#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet completely, 10 times
* return: Returns nothing
*/
void print_alphabet_x10(void)
{
	int alpha;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
