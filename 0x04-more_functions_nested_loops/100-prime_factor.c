#include "holberton.h"

/**
 * main - main function.
 *
 * Description: This program finds and prints the largest prime
 * factor of the number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	long num = 612852475143;
	long fac;

	for (fac = 2; num > fac; fac++)
	{
		while (num % fac == 0)
		{
			num = num / fac;
		}
	}
	printf("%ld\n", fac);

	return (0);
}
