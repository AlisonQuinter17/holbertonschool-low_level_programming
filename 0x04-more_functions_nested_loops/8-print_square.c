#include "holberton.h"

/**
 * print_square - main function.
 * @size: number.
 *
 * Description: This function prints a square.
 * Return: none.
 */

void print_square(int size)
{
	int i, r;

	for (i = 0; i < size; i++)
	{
		for (r = 0; r < size; r++)

			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
