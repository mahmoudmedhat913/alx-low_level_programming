#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *n, *t;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				t = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = t;
			}
		}
	}
	free(h->array);
	free(h);
}
