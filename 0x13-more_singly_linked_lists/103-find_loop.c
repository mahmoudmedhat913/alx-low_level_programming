#include "lists.h"

/**
 * *find_listint_loop - function that finds the loop in a linked list.
 * @head: linked list
 * Return: address of the node where the loop start or null if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c = head, *x = head;

	while (c && x && x->next)
	{
		c = c->next;
		x = (x->next)->next;
		if (c == x)
		{
			c = head;
			break;
		}
	}
	if (!c || !x || !x->next)
		return (NULL);
	while (c != x)
	{
		c = c->next;
		x = x->next;
	}
	return (x);
}
