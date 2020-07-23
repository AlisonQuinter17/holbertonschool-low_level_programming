#include "lists.h"

/**
 * list_len- main function
 * @h: Pointer to the next node.
 *
 * Description: This function returns the number of elements in a linked
 * list_t list.
 *
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
