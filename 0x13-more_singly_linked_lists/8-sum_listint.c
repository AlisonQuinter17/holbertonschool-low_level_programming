#include "lists.h"

/**
 * sum_listint - main function
 * @head: Pointer to the first node.
 *
 * Description: This function sum of all the data (n) of a
 * listint_t linked list.
 *
 * Return: The sum or 0 if the list don't exist.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head =  head->next;
		}
		return (sum);
	}
	return (0);
}
