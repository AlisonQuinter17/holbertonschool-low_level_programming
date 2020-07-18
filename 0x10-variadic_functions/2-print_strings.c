#include "variadic_functions.h"

/**
 * print_strings - main function
 * @separator: Pointer to the string separator.
 * @n: The number of arguments.
 * @...: The strings to print.
 *
 * Description: This function prints strings, followed by a new line.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	int i = 0;

	va_start(st, n);

	if (n < 1)
	{
		printf("\n");
		return;
	}

	while (i < (int)n)
	{
		if (st == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", va_arg(st, char*));
		}

		if (separator && i != ((int)n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(st);
}
