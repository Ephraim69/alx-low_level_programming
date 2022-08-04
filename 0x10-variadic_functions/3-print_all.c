#include "variadic_functions.h"

/**
* print_all - a function that prints anything
* @format: a list of types of arguments passed to the function
* Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *ptr;

	va_start(args, format);
	while (j < 1 && format != NULL)
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (ptr == NULL)
						ptr = "(nil)";
					printf("%s", ptr);
					break;
				default:
					i++;
					j++;
					continue;
			}
			j++;
			if (format[i + 1] == '\0')
			{
				break;
			}
			printf(", ");
			i++;
		}
	printf("\n");
	va_end(args);
}
