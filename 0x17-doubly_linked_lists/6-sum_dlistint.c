#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of the list.
 * @head: Pointer to the head.
 *
 * Return: If the list is empty, return 0.
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
