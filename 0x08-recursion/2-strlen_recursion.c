#include "holberton.h"

/**
 * _strlen_recursion - main function.
 * @s: Pointer to the string.
 *
 * Description: This function returns the length of a string.
 *
 * Return: The integer length.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + (_strlen_recursion(s + 1)));
	}

	else
	{
		return (0);
	}
}
