#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @h: pointer to fist node
 * Return: no. of free elements
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *c;
	size_t l = 0;
	int i;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			c = (*h)->next;
			free(*h);
			*h = c;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
