#include "lists.h"

/**
 * free_dlistint - frees a dllist
 * @head: the head of the list
 *
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int i = 0;

	if (!head)
		return;

	if (!(tmp->next))
	{
		free(tmp);
		return;
	}

	while (tmp)
	{
		tmp = tmp->next;
		if (!i)
			free(tmp->prev);
		free(tmp);
		i++;
	}
}
