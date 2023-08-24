#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node -  function that adds a new node
 * at the beginning of a list_t list.
 * @head: double pointer
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *l;
	unsigned int i = 0;

	while (str[i])
		i++;
	l = malloc(sizeof(list_t));
	if (!l)
		return (NULL);
	l->str = strdup(str);
	l->len = i;
	l->next = (*head);
	(*head) = l;
	return (*head);
}
