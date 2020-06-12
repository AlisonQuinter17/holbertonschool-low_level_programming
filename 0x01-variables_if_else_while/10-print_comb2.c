#include <stdio.h>

/**
 * main - This program prints the numbers from 00 to 99.
 *
 * Return: 0.
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		int c = '0';

		while (c <= '9')
		{
			putchar(i);
			putchar(c);

			if (i != '9' || c != '9')
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
