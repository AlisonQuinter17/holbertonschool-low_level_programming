#include "holberton.h"

/**
 * _isdigit - main function.
 * @c: parameter letter.
 *
 * Description: This function checks for a digit (0 through 9).
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
