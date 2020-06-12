#include <stdio.h>

/**
 * main - This program prints the numbers 0 to 9 separated
 * by a comma and a space, minus the number 9.
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
