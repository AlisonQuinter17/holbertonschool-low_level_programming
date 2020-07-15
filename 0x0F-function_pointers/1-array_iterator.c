#include "function_pointers.h"

/**
 * array_iterator - main function
 * @array: Pointer to int array.
 * @size: The array size.
 * @action: The function pointer.
 *
 * Description: This function executes a function given as a parameter
 * on each element of an array.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array && size)

		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
