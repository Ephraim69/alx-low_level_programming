#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new
* node at a given position
* @head: a pointer to the head of the linked list
* @idx: the index of the list where the new node should be added.
* Index starts at 0
* @n: the data to be added to the new node
* Return: returns the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i = 0, j = 0;

	if (!(*head))
		return (NULL);
	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (idx >= i)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp && j < (idx - 1))
	{
		tmp = tmp->next;
		j++;
	}
	if (idx == (i - 1))
	{
		new->next = NULL;
		tmp->next->next = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
