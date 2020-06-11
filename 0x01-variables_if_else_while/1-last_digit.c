#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program will assign a random number to the
 * variable n each time it is run, printing only the last digit.
 *
 * Return: 0.
 */

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;

	printf("Last digit of %d is %d and is ", n, d);

		if (d > 5)
		{
			printf("greater than 5\n");
		}
		else if (d == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("less than 6 and not 0\n");
		}
	return (0);
}
