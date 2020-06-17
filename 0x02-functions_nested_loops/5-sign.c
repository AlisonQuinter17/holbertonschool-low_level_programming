#include "holberton.h"

/**
 * print_sign - main function.
 * @n: Test character.
 *
 * Description: This function prints the sign of a number.
 * Return: 1 and prints + if n is greater than zero,
 * or 0 and prints 0 if n is zero,
 * or -1 and prints - if n is less than zero.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
