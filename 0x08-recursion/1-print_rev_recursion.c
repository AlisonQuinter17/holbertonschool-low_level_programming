#include "holberton.h"

/**
 * _print_rev_recursion - main function.
 * @s: Pointer to the string.
 *
 * Description: This function prints a string in reverse.
 *
 * Return: None.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
