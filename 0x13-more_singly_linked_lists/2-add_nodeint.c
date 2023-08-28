#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer
 * @n: data
 * Return: pointer to the new node or null if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);
	c->n = n;
	c->next = *head;
	*head = c;
	return (c);
}
