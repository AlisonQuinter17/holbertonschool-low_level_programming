#include "holberton.h"

/**
 * print_triangle - Main function.
 * @size: parameter.
 *
 * Description: This function prints a triangle.
 * Return: none.
 */

void print_triangle(int size)
{
	int n;
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{

				if (n < size - i - 1)
					putchar(' ');

				else
					putchar('#');

			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
