#include "lists.h"

/**
 * add_node_end- main function
 * @head: The pointer address to header node.
 * @str: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *run;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		run = *head;
		while (run->next)
		{
			run = run->next;
		}
		run->next = newnode;
	}
	return (newnode);
}
