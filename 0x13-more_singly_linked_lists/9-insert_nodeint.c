#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: pointer to first node
 * @idx: index
 * @n: data
 * Return: pointer to new node or null otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c, *x = *head;
	unsigned int i = 0;

	c = malloc(sizeof(listint_t));
	if (!c || !head)
		return (NULL);
	c->n = n;
	c->next = NULL;
	if (idx == 0)
	{
		c->next = *head;
		*head = c;
		return (c);
	}
	while (x && i < idx)
	{
		if (i == idx - 1)
		{
			c->next = x->next;
			x->next = c;
			return (c);
		}
		else
			x = x->next;
		i++;
	}
	return (NULL);
}
