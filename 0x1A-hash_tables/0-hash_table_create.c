#include "hash_tables.h"

/**
 * *hash_table_create - create hash table
 * @size: size
 * Return: pointer or null if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(hash_table_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		h->array[i] = NULL;
	}
	return (h);
}
