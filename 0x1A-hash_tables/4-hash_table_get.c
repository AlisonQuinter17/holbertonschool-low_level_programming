#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: The Hash table.
 * @key: The key.
 *
 * Return: The value associated with the element, or
 * NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list;
	unsigned long int idx = 0;

	if (!ht || !key)
	{
		return (0);
	}

	idx = key_index((const unsigned char *) key, ht->size);
	list = ht->array[idx];

	while (list)
	{
		if (strcmp(list->key, key) == 0)
		{
			return (list->value);
		}
		list = list->next;
	}
	return (0);
}
