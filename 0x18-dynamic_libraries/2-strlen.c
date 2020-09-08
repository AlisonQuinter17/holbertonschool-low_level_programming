#include "holberton.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: pointer char
 * Return: nothing
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
