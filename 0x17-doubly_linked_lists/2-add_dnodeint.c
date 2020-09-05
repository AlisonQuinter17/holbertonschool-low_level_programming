#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head.
 * @n: Element.
 *
 * Return: The address of the new element, or NULL if it failed.
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;

	if (*head)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
