#include "holberton.h"

/**
 * *_strstr - main function.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * Description: This function locates a substring.
 *
 * Return: A pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			haystack++;
		}
		needle++;
	}
	return (0);
}
