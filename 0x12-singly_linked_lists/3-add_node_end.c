#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: double pointer
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l, *x = *head;
	unsigned int i = 0;

	while (str[i])
		i++;
	l = malloc(sizeof(list_t));
	if (!l)
		return (NULL);
	l->str = strdup(str);
	l->len = i;
	l->next = NULL;
	if (*head == NULL)
	{
		*head = l;
		return (l);
	}
	while (x->next)
		x = x->next;
	x->next = l;
	return (l);
}
