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
	list_t *newnode, *run = *head;

	newnode = malloc(sizeof(list_t));

	if (!head || !newnode)
	{
		return (NULL);
	}

	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = _strlen(newnode->str);

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
