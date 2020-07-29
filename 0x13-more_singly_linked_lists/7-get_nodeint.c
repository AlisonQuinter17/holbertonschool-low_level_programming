#include "lists.h"

/**
 * get_nodeint_at_index - main function
 * @head: Pointer to the head node.
 * @index: The index of the node.
 *
 * Description: This function the nth node of a linked list.
 *
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l;
	unsigned int a;

	l = head;

	if (head == NULL)
		return (NULL);

	for (a = 0; a != index; a++)
	{
		l = l->next;
	}

	if (l)
		return (l);

	else
		return (NULL);
}
