#include "lists.h"

/**
 * print_dlistint - a function that prints all the element of a doubly
 * linked list
 * @h: the head of the linked list
 *
 * Return: returns the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
