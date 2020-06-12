#include <stdio.h>

/**
 * main - This program print the numbers from 0 to 9 without char variable.
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
