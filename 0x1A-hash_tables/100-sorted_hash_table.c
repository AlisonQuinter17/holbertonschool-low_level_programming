#include "hash_tables.h"

/**
 * shash_table_create - Hashing function.
 * @str: The key.
 *
 * Return: The hashed index.
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table = NULL;

	if (size < 1)
	{
		return (NULL);
	}

	new_table = calloc(1, sizeof(shash_table_t));

	if (!new_table)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_table_t *));

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new = NULL, *list = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value)
	{
		return (0);
	}

	new = malloc(sizeof(shash_node_t));
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

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *list;
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

void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *list = NULL;
	unsigned long count, j = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (count = 0; count <= (ht->size); count++)
	{
		list = ht->array[count];
		while (list)
		{
			if (j)
			{
				printf(", ");
			}
			printf("'%s': '%s'", list->key, list->value);
			j++;
			list = list->next;
		}
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *list = NULL;
	unsigned long count, j = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (count = (ht->size); count > 0; count--)
	{
		list = ht->array[count];
		while (list)
		{
			if (j)
			{
				printf(", ");
			}
			printf("'%s': '%s'", list->key, list->value);
			j++;
			list = list->next;
		}
	}
	printf("}\n");
}


void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *list, *tem;
	unsigned long int i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
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
	}
	free(ht->array);
	free(ht);
}
