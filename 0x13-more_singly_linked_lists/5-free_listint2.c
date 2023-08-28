#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
		return;
	while (*head)
	{
		c = (*head)->next;
		free(*head);
		*head = c;
	}
	*head = NULL;
}
