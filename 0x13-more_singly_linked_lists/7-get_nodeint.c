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
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
