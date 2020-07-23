#include "lists.h"

/**
 * add_node- main function
 * @head: The pointer address to header node.
 * @str: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the beginning
 * of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = NULL;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		newnode->str = strdup(str);
		newnode->len = _strlen(newnode->str);
	}
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
