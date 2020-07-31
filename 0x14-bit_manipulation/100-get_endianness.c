#include "holberton.h"

/**
 * get_endianness - main function
 *
 * Description: This function checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
