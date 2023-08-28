#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: list
 */

void free_listint(listint_t *head)
{
	listint_t *c;

	while (head)
	{
		c = head->next;
		free(head);
		head = c;
	}
}
