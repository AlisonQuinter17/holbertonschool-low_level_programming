#include "holberton.h"

/**
 * *_strncat - main function.
 * @src: The source.
 * @dest: The destination.
 * @n: The number of bytes to copy.
 *
 * Description: This function concatenates two strings with limiter n bytes.
 *
 * Return: The pointer to destination buffer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = _strlen(dest);
	int s = _strlen(src);
	int i = 0;
	int r = 0;

	while (r < n)
	{
		if (r > s)
			break;

		dest[d + i] = src[r];
		i++;
		r++;
	}
	dest[d + i] = 0;
	return (dest);
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
