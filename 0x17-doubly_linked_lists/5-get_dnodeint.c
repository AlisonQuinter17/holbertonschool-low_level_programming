#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t linked list.
 * @head: Pointer to the head.
 * @index: Index.
 *
 * Return: The nth node.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
