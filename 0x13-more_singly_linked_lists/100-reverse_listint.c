#include "lists.h"

/**
 * *reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to first node
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
