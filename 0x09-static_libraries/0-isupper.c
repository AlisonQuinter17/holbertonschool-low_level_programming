#include "holberton.h"

/**
 * _isupper - main function.
 * @c: parameter letter.
 *
 * Description: This function checks for uppercase character.
 * Return: 1 if c is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
