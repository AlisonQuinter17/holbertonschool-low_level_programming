#include "holberton.h"

/**
 * flip_bits - main function
 * @n: The first num.
 * @m: The second num.
 *
 * Description: This function returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * Return: The number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0, sum = 1, i = 0;
	int lim = 63;

	c = n ^ m;

	while (lim >= 0)
	{
		if (c & sum << lim)
		{
			i++;
		}
		lim--;
	}
	return (i);
}
