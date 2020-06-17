#include "holberton.h"

/**
 * jack_bauer - main function.
 *
 * Description: This function prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: none.
 */

void jack_bauer(void)
{
	int t, m;

	for (t = 0; t <= 23; t++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar (t / 10 + '0');
			_putchar (t % 10 + '0');
			_putchar (':');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar('\n');
		}
	}
}
