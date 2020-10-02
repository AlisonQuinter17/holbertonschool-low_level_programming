#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list = NULL;
	unsigned long int count, j;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (count = 0; count <= (ht->size); count++)
	{
		list = ht->array[count];
		for (j = 0; list; j++)
		{
			if (j)
			{
				printf(", ");
			}
			printf("'%s': '%s'", list->key, list->value);
			list = list->next;
		}
	}
	printf("}\n");
}
