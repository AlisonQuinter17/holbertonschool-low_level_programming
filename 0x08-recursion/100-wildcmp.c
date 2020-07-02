#include "holberton.h"
/**
 * wildcmp - main function.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Description: Compares two strings.
 *
 * Return: If the strings identical 1 Otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	else if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
	{
		return (1);
	}

	else if (*s2 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
	{
		return (0);
	}

	return (0);
}
