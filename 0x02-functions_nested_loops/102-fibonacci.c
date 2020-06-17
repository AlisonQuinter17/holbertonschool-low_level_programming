#include "holberton.h"
#include <stdio.h>

/**
 * main - main function.
 *
 * Description: This function prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0.
 */

int main(void)
{
	int i, n, t1 = 1, t2 = 2, nextTerm;

	n = 50;


	for (i = 1; i <= n; ++i)
	{
		printf("%d", t1);

		if (i < 50)
			printf(", ");
		else
			printf("\n");


		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
