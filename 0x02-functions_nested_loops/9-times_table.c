#include "holberton.h"

/**
 * times_table - main function.
 *
 * Description: This function prints prints the 9 times table, starting with 0.
 * Return: none.
 */

void times_table(void)
{
	int m, l, r;

	for (m = 0; m <= 9; m++)
	{
		for (l = 0; l <= 9; l++)
		{
			r = m * l;

			if (r < 10)
			{
				if (l > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
