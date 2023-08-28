#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *c = head;
	int sum = 0;

	while (c)
	{
		sum += c->n;
		c = c->next;
	}
	return (sum);
}
