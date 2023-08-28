#include "lists.h"

/**
 * *find_listint_loop - function that finds the loop in a linked list.
 * @head: linked list
 * Return: address of the node where the loop start or null if there is no loop
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
				return (c->next);
		}

	}
	return (NULL);
}
