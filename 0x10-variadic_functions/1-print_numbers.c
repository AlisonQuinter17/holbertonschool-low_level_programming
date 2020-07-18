#include "variadic_functions.h"

/**
 * print_numbers - main function
 * @separator: Pointer to the string separator.
 * @n: The number of arguments.
 * @...: The integrers to print.
 *
 * Description: This function prints numbers, followed by a new line.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i = 0;

	va_start(p, n);

	while (i < (int)n)
	{
		printf("%d", va_arg(p, int));

		if (separator && i != ((int)n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
