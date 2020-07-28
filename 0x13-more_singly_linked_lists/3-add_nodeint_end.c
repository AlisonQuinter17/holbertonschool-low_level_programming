#include "lists.h"

/**
 * add_nodeint_end - main function
 * @head: The pointer address to header node.
 * @n: Data.
 *
 * Description: This function adds a new node at the end of a listint_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *run = *head;

	newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
	{
		return (NULL);
	}

	newnode->next = NULL;
	newnode->n = n;

	if (run == NULL)
	{
		*head = newnode;
	}

	else
	{
		while (run->next)
		{
			run = run->next;
		}
		run->next = newnode;
	}
	return (newnode);
}
