#include "lists.h"

/**
 * insert_nodeint_at_index - main function
 * @head: The address of pointer to first node.
 * @idx: The index to insert new node.
 * @n: The integrer value of new node.
 *
 * Description: This function inserts a new node at a given position.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head2, *head3, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));

	if (!newnode || !head)
	{
		return (NULL);
	}

	newnode->n = n;
	head2 = *head;

	if (!idx || idx == 0)
	{
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	while (i != (idx - 1) && head2)
	{
		head2 = head2->next;
		i++;
	}

	head3 = head2->next;

	if (head2 || head3)
	{
		head2->next = newnode;
		newnode->next = head3;

		return (newnode);
	}
	return (NULL);
}
