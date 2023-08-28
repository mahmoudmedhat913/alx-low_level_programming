#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - count no. of unique nodes
 * @head: pointer to head
 * Return: no. of unique nodes or 0 if not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *c, *x;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	c = head->next;
	x = (head->next)->next;
	while (x)
	{
		if (c == x)
		{
			c = head;
			while (c != x)
			{
				i++;
				c = c->next;
				x = x->next;
			}
			c = c->next;
			while (c != x)
			{
				i++;
				c = c->next;
			}
			return (i);
		}
		c = c->next;
		x = (x->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - print list safely
 * @head: pointer to head
 * Return: no. of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x = looped_listint_len(head), i = 0;

	if (x == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			x++;
		}
	}
	else
	{
		while (i < x)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (x);
}
