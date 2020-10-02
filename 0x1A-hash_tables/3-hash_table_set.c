#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *list = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value)
	{
		return (0);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	list = ht->array[idx];

	while (list)
	{
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			return (1);
		}
		list = list->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
