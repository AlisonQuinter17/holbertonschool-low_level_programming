#include "holberton.h"

/**
 * print_last_digit - main function.
 * @i: Test character.
 *
 * Description: This function prints the last digit of a number.
 * Return: The value of the last digit.
 */

int print_last_digit(int i)
{
	int d = i % 10;

	if (d < 0)
	{
		d = d * -1;
	}

	_putchar('0' + d);
	return (d);
}
