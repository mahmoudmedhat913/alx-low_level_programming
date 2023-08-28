#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to first element
 * @index: index of node
 * Return: 1 or -1 for fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = NULL, *x = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	while (i < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		i++;
	}
	c = x->next;
	x->next = c->next;
	free(c);
	return (1);
}
