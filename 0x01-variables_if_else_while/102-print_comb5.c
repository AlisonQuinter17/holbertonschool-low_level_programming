#include <stdio.h>

/**
 * main - This program prints all possible combinations
 * of two two-digit numbers.
 * Return: 0.
 */

int main(void)
{
	int l = '0';
	int a;
	int n;
	int d;

	while (l <= '9')
	{
		for (a = '0'; a <= '9'; a++)
		{
			n = '0';

			while (n <= '9')
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (l < n || (l == n && a < d))
					{
						putchar(l);
						putchar(a);
						putchar(' ');
						putchar(n);
						putchar(d);

						if (l != '9' || a != '8' ||
						    n != '9' || d != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				n++;
			}
		}
		l++;
	}
	putchar('\n');
	return (0);
}
