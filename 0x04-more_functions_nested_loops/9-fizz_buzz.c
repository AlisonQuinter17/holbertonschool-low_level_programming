#include "holberton.h"

/**
 * main - main function.
 *
 * Description: This program prints the numbers from 1 to 100 but
 * for multiples of three print Fizz and for the multiples of five
 * print Buzz. For numbers which are multiples of both print FizzBuzz.
 *
 * Return: none.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
