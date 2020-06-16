#include "holberton.h"

/**
 * main - This program prints Holberton, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i = 0;

	char array[] = "Holberton\n";

	while (i <= 9)
	{
		_putchar(array[i]);
		i++;
	}
	return (0);
}
