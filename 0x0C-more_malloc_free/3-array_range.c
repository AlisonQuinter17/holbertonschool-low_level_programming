#include "holberton.h"

/**
 * array_range - main function.
 * @min: The smallest integer.
 * @max: The largest integer.
 *
 * Description: This function creates an array of integers.
 *
 * Return: The pointer int to array.
 */


int *array_range(int min, int max)
{
	int i = 0, s = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	s = (max - min + 1);

	p = malloc(sizeof(int) * s);

	if (p == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
