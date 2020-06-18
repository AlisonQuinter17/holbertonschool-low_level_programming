#include "holberton.h"

/**
 * more_numbers - main function.
 *
 * Description: This function prints 10 times the numbers, from 0 to 14.
 * Return: none.
 */

void more_numbers(void)
{
	int i, q;

	for (i = 0; i <= 9; i++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q >= 10)

				_putchar (q / 10 + '0');
				_putchar (q % 10 + '0');

		}
		_putchar('\n');
	}
}
