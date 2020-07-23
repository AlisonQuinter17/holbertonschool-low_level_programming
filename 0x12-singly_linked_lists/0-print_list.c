#include "lists.h"

/**
 * print_list- main function
 * @h: Pointer to the string.
 *
 * Description: This function prints all the elements of a list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _strlen - main function.
 * @s: Pointer that runs through the string.
 *
 * Description: This function counts the length of a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s == NULL)
	{
		return (0);
	}

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
