#include "holberton.h"

/**
 * *string_toupper - main function.
 * @s: Pointer to lowercase string.
 *
 * Description: This function changes all lowercase letters of a
 * string to uppercase.
 *
 * Return: Uppercase string .
 */

char *string_toupper(char *s)
{
	int upper = 'a' - 'A';
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - upper;
		}

		i++;
	}
	return (s);
}
