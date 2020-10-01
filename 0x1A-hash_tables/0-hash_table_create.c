#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table or
 * NULL if something went wrong.
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size < 1)
	{
		return (NULL);
	}

	new_table = calloc(1, sizeof(hash_table_t));

	if (!new_table)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_table_t *));

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
