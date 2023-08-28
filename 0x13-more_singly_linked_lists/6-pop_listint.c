#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the first element
 * Return: data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *c;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	c = (*head)->next;
	free(*head);
	*head = c;
	return (i);
}
