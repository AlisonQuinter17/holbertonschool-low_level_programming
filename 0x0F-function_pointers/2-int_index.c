#include "function_pointers.h"

/**
 * int_index - main function
 * @array: Pointer to the int array.
 * @size: The array size.
 * @cmp: The function pointer to compare.
 *
 * Description: This function searches for an integer.
 *
 * Return: The integrer index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
