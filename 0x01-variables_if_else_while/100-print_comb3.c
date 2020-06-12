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
			if (i < f)
			{
				putchar(i);
				putchar(f);

				if (i != '8' || f != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
