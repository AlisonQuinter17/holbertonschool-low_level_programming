#include "holberton.h"

/**
 * print_number - main function.
 * @n: number.
 *
 * Description: This function prints an integer.
 * Return: none.
 */

void print_number(int n)
{
	unsigned int i, p, r;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}

	else
	{
		i = n;
	}

	p = 1;
	r = i;

	while (r > 9)
	{
		p *= 10;
		r /= 10;
	}

	for (; p >= 1; p /= 10)
	{
		_putchar(((i / p) % 10) + '0');
	}
}
