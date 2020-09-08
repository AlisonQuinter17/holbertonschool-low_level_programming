#include "holberton.h"

/**
 * *_strncpy - main function.
 * @src: The source.
 * @dest: The destination.
 * @n: The number of bytes to copy.
 *
 * Description: This function copies a string.
 *
 * Return: The pointer to destination buffer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
