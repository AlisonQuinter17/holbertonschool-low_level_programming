#include "holberton.h"

/**
 * reverse_array - main function.
 * @a: Pointer to integrers.
 * @n: Number of elements of the array.
 *
 * Description: This function reverses the content of an array of integers.
 *
 * Return: None.
 */

void reverse_array(int *a, int n)
{
	int p = 0;
	int temp;

	n--;

	while (p < n)
	{
		temp = a[n];
		a[n] = a[p];
		a[p] = temp;

		p++;
		n--;
	}
}
