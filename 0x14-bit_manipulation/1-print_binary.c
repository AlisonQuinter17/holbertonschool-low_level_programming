#include "holberton.h"

/**
 * print_binary - main function
 * @n: The number to convert.
 *
 * Description: This function prints the binary representation of a number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
