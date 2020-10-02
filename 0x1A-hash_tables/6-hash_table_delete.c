#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list, *tem;
	unsigned long int i = 0;

	if (!ht || !ht->array || !ht->size)
		return;

	while (i < ht->size)
	{
		list = ht->array[i];
		while (list)
		{
		        tem = list;
			list = list->next;
			free(tem->key);
			free(tem->value);
			free(tem);
		}
		i++;
	}
	free(list);
	free(ht->array);
	ht->array = NULL;
	free(ht);
}
