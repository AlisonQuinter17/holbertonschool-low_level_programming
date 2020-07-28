#include "lists.h"

/**
 * pop_listint - main function
 * @head: The address of pointer to first node.
 *
 * Description: This function deletes the head node of a listint_t linked list.
 *
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int nd;

	if (!*head)
	{
		return (0);
	}

	nd = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;

	return (nd);
}
