#include "lists.h"

/**
 * delete_nodeint_at_index - main function
 * @head: The address of pointer to first node.
 * @index: The index to delete the node.
 *
 * Description: This function deletes the node at index index of
 * a listint_t linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *h;
	unsigned int i = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (!index)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
		return (1);
	}

	list = *head;

	while (list)
	{
		if (i == index)
		{
			h->next = list->next;
			free(list);
			return (1);
		}
		i++;
		h = list;
		list = list->next;
	}
	return (-1);
}
