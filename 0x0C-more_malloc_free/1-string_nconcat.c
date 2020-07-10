#include "holberton.h"

/**
 * *string_nconcat - main function.
 * @s1: Pointer to the first string (Betty ).
 * @s2: Pointer to the second string (Holberton).
 * @n: Number.
 *
 * Description: This function concatenates two strings.
 * Return: The pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h = _strlen(s1), s = _strlen(s2);
	int i = 0, size;
	unsigned int j = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n >= s)
		n = s;

	size = h + n;

	p = malloc(1 + sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	while (i < size - 1)
	{
		if (s1[i])
			p[i] = s1[i];
		else
			break;
		i++;
	}
	if (n >= s)
		n = s;

	while (j < n)
	{
		if (s2[j])
			p[i] = s2[j];

		i++, j++;
	}
	p[i] = '\0';
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
