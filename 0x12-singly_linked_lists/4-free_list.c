#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *l;

	while (head)
	{
		l = head->next;
		free(head->str);
		free(head);
		head = l;
	}
}
