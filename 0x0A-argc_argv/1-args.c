#include "holberton.h"

/**
 * main - main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program prints the number of arguments passed into it.
 *
 * Return: Zero.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
