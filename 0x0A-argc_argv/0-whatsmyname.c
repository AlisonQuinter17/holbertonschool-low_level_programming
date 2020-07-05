#include "holberton.h"

/**
 * main - main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program that prints its name, followed by a new line.
 *
 * Return: Zero.
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
