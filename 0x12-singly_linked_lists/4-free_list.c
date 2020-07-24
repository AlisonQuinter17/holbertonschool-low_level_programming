#include "lists.h"

/**
 * free_list - main function
 * @head: The pointer address to header node.
 *
 * Description: This function frees a list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *newnode, *n;

	if (!head)
	{
		return;
	}

	newnode = head;
	while (newnode)
	{
		n = newnode->next;
		free(newnode->str);
		free(newnode);
		newnode = n;
	}
}
