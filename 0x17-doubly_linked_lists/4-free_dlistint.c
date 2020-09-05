#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list.
 * @head: Pointer to the head.
 *
 * Return: Nothing.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head, *container;

	if (list)
	{
		while (list)
		{
			container = list->next;
			free(list);
			list = container;
		}
	}
}
