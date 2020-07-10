#include "holberton.h"

/**
 * _calloc - main function.
 * @nmemb: Number.
 * @size: Type.
 *
 * Description: This function allocates memory for an array, using malloc.
 * Return: The pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
