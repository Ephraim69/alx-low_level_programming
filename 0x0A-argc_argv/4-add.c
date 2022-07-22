#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - a program that adds positive numbers
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!strcmp(argv[i], "0"))
			continue;
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
