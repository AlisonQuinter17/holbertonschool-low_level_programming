#include "holberton.h"

/**
 * clear_bit - main function
 * @n: The number to print.
 * @index: The index of the number.
 *
 * Description: This function sets the value of a bit to 0 at a given index.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
