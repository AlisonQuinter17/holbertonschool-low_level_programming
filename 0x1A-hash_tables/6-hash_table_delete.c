#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list = NULL, *rem = NULL;
	unsigned long i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i <= (ht->size); i++)
	{
		list = ht->array[i];
		while (list)
		{
			rem = list;
			list = list->next;
			free(rem->key);
			free(rem->value);
			free(rem);
		}
	}
	free(list);
	free(ht->array);
	free(ht);
}
