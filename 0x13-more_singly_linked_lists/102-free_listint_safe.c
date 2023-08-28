#include "lists.h"

/**
 * *find_listint_loop - find loop
 * @head: linked list
 * Return: address where it starts or null if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c, *x;

	if (head == NULL)
		return (NULL);
	for (x = head->next; x != NULL; x = x->next)
	{
		if (x == x->next)
			return (x);
		for (c = head; c != x; c = c->next)
		{
			if (c == x->next)
				return (x->next);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: header
 * Return: no. of free nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *c, *x;
	size_t l;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);
	x = find_listint_loop(*h);
	for (l = 0; (*h != x || i) && *h != NULL; *h = c)
	{
		l++;
		c = (*h)->next;
		if (*h == x && i)
		{
			if (x == x->next)
			{
				free(*h);
				break;
			}
			l++;
			c = c->next;
			free((*h)->next);
			i = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (l);
}

