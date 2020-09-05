#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head.
 * @idx: Index.
 * @n: Integer value.
 *
 * Return: The address of the new node, or NULL if it failed.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux = *h, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	if (!*h)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		(*h) = newnode;
	}

	while (aux)
	{
		if (i == idx - 1 && aux->next != NULL)
		{
			newnode->n = n;
			newnode->next = aux->next;
			newnode->prev = aux;
			aux->next->prev = newnode;
			aux->next = newnode;
		}
		else if (i == idx - 1 && aux->next == NULL)
		{
			newnode->n = n;
			newnode->next = NULL;
			newnode->prev = aux;
			aux->next = newnode;
		}
		aux = aux->next;
		i++;
	}
	if (idx > i)
	{
		return (NULL);
	}
	return (newnode);
}
