#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to first element
 * @n: data
 * Return: pointer to the new node or null if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c, *x = *head;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);
	c->n = n;
	c->next = NULL;
	if (*head == NULL)
	{
		*head = c;
		return (c);
	}
	while (x->next)
		x = x->next;
	x->next = c;
	return (c);
}
