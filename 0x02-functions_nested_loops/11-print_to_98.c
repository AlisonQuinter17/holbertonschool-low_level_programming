#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - main function.
 * @n: Initial value.
 *
 * Description: This function prints all natural numbers from n to 98.
 * Return: none.
 */

void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		i = -1;
	}

	else if (n < 98)
	{
		i = 1;
	}

	while (n != 98)
	{
		printf("%d, ", n);
		n += i;
	}

	printf("%d\n", n);
}
