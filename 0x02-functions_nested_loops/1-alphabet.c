#include "holberton.h"

/**
 * print_alphabet - main function.
 * Description: This program prints the alphabet, in lowercase.
 *
 * Return: none.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
