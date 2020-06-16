#include "holberton.h"

/**
 * print_alphabet_x10 - main function.
 * Description: This program prints 10 times the alphabet, in lowercase.
 *
 * Return: none.
 */

void print_alphabet_x10(void)
{
	int n;
	char i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
