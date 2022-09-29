#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a given dllist index
 * @head: the head of the linked list
 * @index: the index to retrieve
 *
 * Return: returns the node at index or NULL if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int c = 0, i = 0;

	if (!head)
		return (NULL);

	while (tmp)
	{
		c++;
		tmp = tmp->next;
	}

	if (index >= c)
		return (NULL);

	while (tmp)
	{
		if (i == index)
		{
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
