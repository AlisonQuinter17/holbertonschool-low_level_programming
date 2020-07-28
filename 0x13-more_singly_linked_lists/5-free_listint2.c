#include "lists.h"

/**
 * free_listint2 - main function
 * @head: The address of pointer to first node.
 *
 * Description: This function frees a listint_t list (2).
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (!head)
	{
		return;
	}

	while (*head)
	{
		list = *head;
		*head = list->next;
		free(list);
	}
}
