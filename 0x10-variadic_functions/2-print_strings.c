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
	char *container;

	va_start(st, n);

	while (i < ((int) n))
	{
		container = va_arg(st, char*);

		if (!container)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", container);
		}

		if (separator && i != ((int) n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(st);
}
