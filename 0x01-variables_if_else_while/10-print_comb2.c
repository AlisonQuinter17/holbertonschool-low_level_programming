#include <stdio.h>

/**
 * main - This program prints the numbers from 00 to 99.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int f;

	for (i = '0'; i <= '9'; i++)
	{
		for (f = '0'; f <= '9'; f++)
		{
			putchar(i);
			putchar(f);

			if (f != '9')

				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
