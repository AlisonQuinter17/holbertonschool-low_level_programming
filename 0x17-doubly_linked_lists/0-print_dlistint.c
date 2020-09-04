#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head.
 *
 * Return: The number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list = h;
	int counter = 0;

	if (!h)
	{
		return (counter);
	}
	else
	{
		while (list)
		{
			printf("%i\n", list->n);
			list = list->next;
			counter++;
		}
	}
	return (counter);
}
