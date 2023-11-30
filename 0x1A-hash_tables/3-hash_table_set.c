#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer
 * @key: key
 * @value: value
 * Return: 1 or 0 for fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = copy;
	n->next = ht->array[index];
	ht->array[index] = n;
	return (1);
}
