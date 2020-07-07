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
	char *v;

	v = malloc(sizeof(char) * size);

	if (size == 0 || !size)
	{
		return (NULL);
	}

	while (size--)
	{
		v[size] = c;
	}
	return (v);
}
