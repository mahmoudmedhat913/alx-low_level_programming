#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: first node
 * @index: index of node
 * Return: pointer to node or null otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = head;
	unsigned int i = 0;

	while (c && i < index)
	{
		c = c->next;
		i++;
	}
	return (c ? c : NULL);
}
