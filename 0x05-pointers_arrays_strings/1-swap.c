#include "holberton.h"

/**
 * swap_int - main function.
 * @a: Pointer, first integrer.
 * @b: Pointer, second integrer.
 *
 * Description: This function swaps the values of two integers.
 *
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
