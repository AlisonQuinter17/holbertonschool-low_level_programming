#include "holberton.h"

/**
 * puts_half - main function.
 * @str: Pointer, the string of numbers to print.
 *
 * Description: This function prints half of a string.
 *
 * Return: none.
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
