#include <stdio.h>

/**
 * main - This program prints all possible different combinations
 * of two digits.
 *
 * Return: 0.
 */

int main(void)
{
	int i = '0';
	int f;

	while (i <= '9')
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
		i++;
	}
	putchar('\n');
	return (0);
}
