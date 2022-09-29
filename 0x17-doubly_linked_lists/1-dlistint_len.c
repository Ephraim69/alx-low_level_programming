#include "lists.h"

/**
 * dlistint_len - a function that counts the numebr of elements in a
 * dlistint list
 * @h: the head of the linked list
 *
 * Return: returns the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}

	return (i);
}
