#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *n;
	char *c = "";

	if (!ht || !ht->array)
		return;
	putchar('{');
	while (i < ht->size)
	{
		n = ((ht->array)[i]);
		while (n)
		{
			printf("%s'%s': '%s'", c, n->key, n->value);
			c = ", ";
			n = n->next;
		}
		i++;
	}
	puts("}");
}
