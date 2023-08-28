#include "lists.h"

/**
 * *find_listint_loop - function that finds the loop in a linked list.
 * @head: linked list
 * Return: address of the node where the loop start or null if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c, *x;

	if (head == NULL || head->next == NULL)
		return (NULL);
	c = head->next;
	x = (head->next)->next;
	while (x)
	{
		if (c == x)
		{
			x = head;
			while (c != x)
			{
				c = c->next;
				x = x->next;
			}
			return (0);
		}
		c = c->next;
		x = (x->next)->next;
	}
	return (NULL);
}
