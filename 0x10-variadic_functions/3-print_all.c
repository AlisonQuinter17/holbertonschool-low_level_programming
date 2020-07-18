#include "variadic_functions.h"

/**
 * print_all - main function
 * @format: A list of types of arguments passed to the function.
 * @...: The parameters to print.
 *
 * Description: This function prints anything.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list u;
	char *separator = ", ";

	tokens_t op[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		{NULL, NULL}
	};

	int i = 0, j;

	va_start(u, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*(op[j].pm) == format[i])
			{
				op[j].f(u);

				if (format[i + 1])
				{
					printf("%s", separator);
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(u);
}


/**
 * op_c - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a char.
 *
 * Return: Nothing.
 */

void op_c(va_list p)
{
	printf("%c", (char)va_arg(p, int));
}


/**
 * op_i - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a integrer.
 *
 * Return: Nothing.
 */

void op_i(va_list p)
{
	printf("%i", va_arg(p, int));
}


/**
 * op_f - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a float.
 *
 * Return: Nothing.
 */

void op_f(va_list p)
{
	printf("%f", va_arg(p, double));
}


/**
 * op_s - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a string.
 *
 * Return: Nothing.
 */

void op_s(va_list p)
{
	if (p == NULL)
	{
		printf("(nil)");
	}
	printf("%s", va_arg(p, char*));
}
