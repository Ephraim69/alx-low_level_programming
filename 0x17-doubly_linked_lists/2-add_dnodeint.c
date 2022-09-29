#include "lists.h"

/**
 * add_dnodeint - a function that adds a node at the beginning of a linked
 * list
 * @head: the head of the dllist
 * @n: the data to be added
 *
 * Return: returns the address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (!(*head))
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
