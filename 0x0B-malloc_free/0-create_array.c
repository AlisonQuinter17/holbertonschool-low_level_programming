#include "holberton.h"

/**
 * *create_array - main function.
 * @size: The size of the char array.
 * @c: The default byte filling.
 *
 * Description: This function creates an array of chars,
 * and initializes it with a specific char.
 *
 * Return: The pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *v;

	if (size == 0)
	{
		return (NULL);
	}

	v = malloc(sizeof(char) * size);

	if (v == NULL)
	{
		return (NULL);
	}

	while (n < size)
	{
		v[n] = c;
		n++;
	}
	return (v);
}
