#include "variadic_functions.h"

/**
* print_numbers - a function that prints a variable number of integers
* @separator: the string to be printed between each integer
* @n: the number of integers to be printed
* Return: returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		if (separator == NULL)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
	printf("\n");
}
