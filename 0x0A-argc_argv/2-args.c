#include "holberton.h"

/**
 * main - main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program prints all arguments it receives.
 *
 * Return: Zero.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
