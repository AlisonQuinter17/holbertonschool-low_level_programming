#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head.
 * @n: Element.
 *
 * Return: The address of the new element, or NULL if it failed.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *list = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (list)
	{
		while (list->next)
		{
			list = list->next;
		}
		newnode->prev = list;
		list->next = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
