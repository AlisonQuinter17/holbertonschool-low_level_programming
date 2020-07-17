#include "variadic_functions.h"

/**
 * sum_them_all - main function
 * @n: The number of arguments.
 * @...: The integrers to sum.
 *
 * Description: This function sum of all its parameters.
 *
 * Return: The sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int sum = 0, i = 0;

	va_start(op, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < (int)n)
	{
		sum += va_arg(op, int);
		i++;
	}

	va_end(op);

	return (sum);
}
