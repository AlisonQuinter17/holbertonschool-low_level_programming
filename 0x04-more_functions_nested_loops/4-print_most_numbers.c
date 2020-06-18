#include "holberton.h"

/**
 * print_most_numbers - main function.
 *
 * Description: This function print the numbers from 1 to 9
 * without including the number 2.
 * Return: none.
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar ('\n');
}
