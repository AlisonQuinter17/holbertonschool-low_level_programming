#include "holberton.h"

/**
 * _puts_recursion - main function.
 * @s: Pointer to the string.
 *
 * Description: This function prints a string, followed by a new line.
 *
 * Return: None.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar ('\n');
	}
}
