#include "holberton.h"

/**
 * *str_concat - main function.
 * @s1: Pointer to the first string (Betty ).
 * @s2: Pointer to the second string (Holberton).
 *
 * Description: This function concatenates two strings.
 *
 * Return: The pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int b, h, size, i = 0, j = 0;
	char *p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	b = _strlen(s1);
	h = _strlen(s2);
	size = b + h + 1;

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	while (i < (size - 1))
	{
		if (s1[i])
		{
			p[i] = s1[i];
		}

		else
		{
			break;
		}
		i++;
	}
	while (i < (size - 1))
	{
		if (s2[j])
		{
			p[i] = s2[j];
		}

		i++;
		j++;
	}
	p[i + 1] = '\0';
	return (p);
}

/**
 * _strlen - main function.
 * @s: Pointer that runs through the string.
 *
 * Description: This function counts the length of a string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
