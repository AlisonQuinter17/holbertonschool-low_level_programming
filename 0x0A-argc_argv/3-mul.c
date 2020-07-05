#include "holberton.h"

/**
 * main - main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program multiplies two numbers.
 *
 * Return: Zero or one if the program does not receive two arguments.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
