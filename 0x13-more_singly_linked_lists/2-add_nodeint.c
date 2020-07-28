#include "lists.h"

/**
 * add_nodeint - main function
 * @head: The pointer address to header node.
 * @n: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the beginning of a
 * listint_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
