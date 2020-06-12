#include <stdio.h>

/**
 * main - This program prints all possible different combinations
 * of two digits.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int f;
	int q;

	for (i = '0'; i <= '9'; i++)
	{
		for (f = '0'; f <= '9'; f++)
		{
			for (q = '0'; q <= '9'; q++)
			{
				if (i < f && f < q)
				{
					putchar(i);
					putchar(f);
					putchar(q);

					if (i != '7' || f != '8' || q != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
