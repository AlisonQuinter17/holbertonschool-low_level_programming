#include "holberton.h"

/**
 * _strcmp - main function.
 * @s1: Pointer to fisrt string.
 * @s2: Pointer to second string.
 *
 * Description: This function compares two string.
 *
 * Return: The negative, positive  or zero integrer, depends of the
 * condition, and the difference between s1 and s2 when exist.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 > *s2 ? 1 : -1);
	}
}
