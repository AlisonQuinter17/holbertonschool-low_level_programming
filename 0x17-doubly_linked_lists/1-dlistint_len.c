#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head.
 *
 * Return: The number of elements.
 **/
size_t dlistint_len(const dlistint_t *h)
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
			list = list->next;
			counter++;
		}
	}
	return (counter);
}
