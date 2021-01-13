#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: The first index where value is located or -1
 * if value is not present in array or if array is NULL.
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, half, i;

	if (!array || !size)
	{
		return (-1);
	}

	while (left <= right)
	{
		half = (right + left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d%s", array[i], i != right ? "," : "\n");
		}

		if (array[half] == value)
		{
			return (half);
		}
		if (array[half] > value)
		{
			right = half - 1;
		}
		else
		{
			left = half + 1;
		}
	}
	return (-1);
}
