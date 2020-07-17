#include "3-calc.h"

/**
 * main - main function
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program perform simple operations.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, process;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != 0 ||
	    (argv[2][0] != '+' &&
	    argv[2][0] != '-' &&
	    argv[2][0] != '*' &&
	    argv[2][0] != '/' &&
	    argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	process = (*get_op_func(argv[2]))(num1, num2);
	{
		printf("%d\n", process);
	}
	return (0);
}
