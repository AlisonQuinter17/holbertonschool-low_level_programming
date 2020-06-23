#include "holberton.h"

/**
 * _puts - main function.
 * @str: Pointer, the string to print.
 *
 * Description: This function prints a string.
 *
 * Return: none.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
