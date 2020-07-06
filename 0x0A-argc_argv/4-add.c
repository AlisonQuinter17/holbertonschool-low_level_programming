#include "holberton.h"

/**
 * main - main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program adds positive numbers.
 *
 * Return: Zero or one if the program does not receive two arguments.
 */

int main(int argc, char *argv[])
{
	int i, j, count;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");

					return (1);
				}
			}
			count = count + atoi(argv[i]);
		}
	}
	printf("%i\n", count);

	return (0);
}
