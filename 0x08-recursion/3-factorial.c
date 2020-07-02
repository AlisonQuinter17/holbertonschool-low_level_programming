#include "holberton.h"

/**
 * factorial - main function.
 * @n: The number to factorial.
 *
 * Description: This function returns the factorial of a given number.
 *
 * Return: The integer result, and -1 on error.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * (factorial(n - 1)));
	}
}
