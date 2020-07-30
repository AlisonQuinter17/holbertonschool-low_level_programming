#include "holberton.h"

/**
 * binary_to_uint - main function
 * @b: Pointer to the binary number.
 *
 * Description: This function converts a binary number to an unsigned int.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int container = 0, i = 0, mul = 1;

	if (!b)
	{
		return (0);
	}

	while (b[i])
	{
		while (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	i = strlen(b);

	while (i > 0)
	{
		if (b[i - 1] == '1')
		{
			container += mul;
		}
		mul *= 2;
		i--;
	}
	return (container);
}
