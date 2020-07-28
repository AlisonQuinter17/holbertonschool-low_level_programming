#include "lists.h"

/**
 * listint_len - main function
 * @h: Pointer to the next node.
 *
 * Description: This function returns the number of elements in a linked
 * listint_t list.
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
