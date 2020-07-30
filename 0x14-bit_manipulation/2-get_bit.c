#include "holberton.h"

/**
 * get_bit - main function
 * @n: The number to print.
 * @index: The index of the binary number.
 *
 * Description: This function returns the value of a bit at a given index.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		x = (n >> index) & 1;
		return (x);
	}
}
