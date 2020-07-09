#include "holberton.h"

/**
 * *malloc_checked - main function.
 * @b:
 *
 * Description: This function allocates memory using malloc.
 *
 * Return: The pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
