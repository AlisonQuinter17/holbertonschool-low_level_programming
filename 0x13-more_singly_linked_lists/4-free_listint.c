#include "lists.h"

/**
 * free_listint - main function
 * @head: The pointer address to header node.
 *
 * Description: This function frees a listint_t list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = list->next;
		free(list);
	}
}
